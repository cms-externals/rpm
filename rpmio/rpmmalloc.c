/** \ingroup rpmio
 * \file rpmio/rpmmalloc.c
 */

#include "system.h"
#include "debug.h"

static rpmMemFailFunc failfunc = NULL;
static void *failfunc_data = NULL;

/*
 * Give memfail callback a chance to try to give us memory or perform
 * it's own cleanup. If we dont get memory we die anyway as rpm doesn't 
 * check for NULL returns from allocations.
 */
static void *vmefail(size_t size)
{
    void *val = failfunc ? (*failfunc)(size, failfunc_data) : NULL;
    if (val == NULL) {
	fprintf(stderr, _("memory alloc (%u bytes) returned NULL.\n"),
		(unsigned)size);
	exit(EXIT_FAILURE);
    }
    return val;	
}

void * rpmSetMemFail(rpmMemFailFunc func, void *data)
{
    void *ofunc = failfunc;
    failfunc = func;
    failfunc_data = data;
    return ofunc;
}

void * rmalloc (size_t size)
{
    register void *value;
    if (size == 0) size++;
    value = malloc (size);
    if (value == NULL)
	value = vmefail(size);
    return value;
}

void * rcalloc (size_t nmemb, size_t size)
{
    register void *value;
    if (size == 0) size++;
    if (nmemb == 0) nmemb++;
    value = calloc (nmemb, size);
    if (value == NULL)
	value = vmefail(size);
    return value;
}

void * rrealloc (void *ptr, size_t size)
{
    register void *value;
    if (size == 0) size++;
    value = realloc (ptr, size);
    if (value == NULL)
	value = vmefail(size);
    return value;
}

char * rstrdup (const char *str)
{
    size_t size = strlen(str) + 1;
    char *newstr = (char *) malloc (size);
    if (newstr == NULL)
	newstr = (char *) vmefail(size);
    strcpy (newstr, str);
    return newstr;
}

void * rfree (void *ptr)
{
    free(ptr);
    return NULL;
}
