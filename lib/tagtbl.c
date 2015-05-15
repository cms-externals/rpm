static const struct headerTagTableEntry_s rpmTagTable[] = {
    { "RPMTAG_ARCH", "Arch", 1022, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_ARCHIVESIZE", "Archivesize", 1046, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_BASENAMES", "Basenames", 1117, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_BUGURL", "Bugurl", 5012, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_BUILDARCHS", "Buildarchs", 1089, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_BUILDHOST", "Buildhost", 1007, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_BUILDTIME", "Buildtime", 1006, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_CAPABILITY", "Capability", 1105, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_C", "C", RPMTAG_CONFLICTNAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CHANGELOGNAME", "Changelogname", 1081, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CHANGELOGTEXT", "Changelogtext", 1082, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CHANGELOGTIME", "Changelogtime", 1080, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CLASSDICT", "Classdict", 1142, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CONFLICTFLAGS", "Conflictflags", 1053, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CONFLICTNAME", "Conflictname", 1054, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CONFLICTS", "Conflicts", RPMTAG_CONFLICTNAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_CONFLICTVERSION", "Conflictversion", 1055, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_COOKIE", "Cookie", 1094, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_DBINSTANCE", "Dbinstance", 1195, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_DEPENDSDICT", "Dependsdict", 1145, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_DESCRIPTION", "Description", 1005, RPM_I18NSTRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_DIRINDEXES", "Dirindexes", 1116, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_DIRNAMES", "Dirnames", 1118, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_DISTRIBUTION", "Distribution", 1010, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_DISTTAG", "Disttag", 1155, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_DISTURL", "Disturl", 1123, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_DSAHEADER", "Dsaheader", RPMTAG_SIG_BASE+11, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_E", "E", RPMTAG_EPOCH, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_EPOCH", "Epoch", 1003, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_EPOCHNUM", "Epochnum", 5019, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_EVR", "Evr", 5013, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_EXCLUDEARCH", "Excludearch", 1059, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_EXCLUDEOS", "Excludeos", 1060, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_EXCLUSIVEARCH", "Exclusivearch", 1061, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_EXCLUSIVEOS", "Exclusiveos", 1062, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILECAPS", "Filecaps", 5010, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILECLASS", "Fileclass", 1141, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILECOLORS", "Filecolors", 1140, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILECONTEXTS", "Filecontexts", 1147, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEDEPENDSN", "Filedependsn", 1144, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEDEPENDSX", "Filedependsx", 1143, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEDEVICES", "Filedevices", 1095, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEDIGESTALGO", "Filedigestalgo", 5011, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_FILEDIGESTS", "Filedigests", 1035, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEFLAGS", "Fileflags", 1037, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEGROUPNAME", "Filegroupname", 1040, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEINODES", "Fileinodes", 1096, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILELANGS", "Filelangs", 1097, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILELINKTOS", "Filelinktos", 1036, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEMD5S", "Filemd5s", RPMTAG_FILEDIGESTS, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEMODES", "Filemodes", 1030, RPM_INT16_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEMTIMES", "Filemtimes", 1034, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILENAMES", "Filenames", 5000, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_FILEPROVIDE", "Fileprovide", 5001, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_FILERDEVS", "Filerdevs", 1033, RPM_INT16_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEREQUIRE", "Filerequire", 5002, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_FILESIZES", "Filesizes", 1028, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILESTATES", "Filestates", 1029, RPM_CHAR_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEUSERNAME", "Fileusername", 1039, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FILEVERIFYFLAGS", "Fileverifyflags", 1045, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_FSCONTEXTS", "Fscontexts", 1148, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_FSNAMES", "Fsnames", 5003, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_FSSIZES", "Fssizes", 5004, RPM_INT64_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_GIF", "Gif", 1012, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_GROUP", "Group", 1016, RPM_I18NSTRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_HDRID", "Hdrid", RPMTAG_SHA1HEADER, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_HEADERCOLOR", "Headercolor", 5017, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_HEADERI18NTABLE", "Headeri18ntable", HEADER_I18NTABLE, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_HEADERIMAGE", "Headerimage", HEADER_IMAGE, RPM_NULL_TYPE + RPM_ANY_RETURN_TYPE, 0 },
    { "RPMTAG_HEADERIMMUTABLE", "Headerimmutable", HEADER_IMMUTABLE, RPM_NULL_TYPE + RPM_ANY_RETURN_TYPE, 0 },
    { "RPMTAG_HEADERREGIONS", "Headerregions", HEADER_REGIONS, RPM_NULL_TYPE + RPM_ANY_RETURN_TYPE, 0 },
    { "RPMTAG_HEADERSIGNATURES", "Headersignatures", HEADER_SIGNATURES, RPM_NULL_TYPE + RPM_ANY_RETURN_TYPE, 0 },
    { "RPMTAG_ICON", "Icon", 1043, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_INSTALLCOLOR", "Installcolor", 1127, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_INSTALLTID", "Installtid", 1128, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_INSTALLTIME", "Installtime", 1008, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_INSTPREFIXES", "Instprefixes", 1099, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_LICENSE", "License", 1014, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_LONGARCHIVESIZE", "Longarchivesize", RPMTAG_SIG_BASE+15, RPM_INT64_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_LONGFILESIZES", "Longfilesizes", 5008, RPM_INT64_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_LONGSIGSIZE", "Longsigsize", RPMTAG_SIG_BASE+14, RPM_INT64_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_LONGSIZE", "Longsize", 5009, RPM_INT64_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_NAME", "Name", 1000, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_NEVRA", "Nevra", 5016, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_NEVR", "Nevr", 5015, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_N", "N", RPMTAG_NAME, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_NVRA", "Nvra", 1196, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_NVR", "Nvr", 5014, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_OBSOLETEFLAGS", "Obsoleteflags", 1114, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_OBSOLETENAME", "Obsoletename", 1090, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_OBSOLETES", "Obsoletes", RPMTAG_OBSOLETENAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_OBSOLETEVERSION", "Obsoleteversion", 1115, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_OLDFILENAMES", "Oldfilenames", 1027, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_O", "O", RPMTAG_OBSOLETENAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_OPTFLAGS", "Optflags", 1122, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_ORIGBASENAMES", "Origbasenames", 1120, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_ORIGDIRINDEXES", "Origdirindexes", 1119, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_ORIGDIRNAMES", "Origdirnames", 1121, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_ORIGFILENAMES", "Origfilenames", 5007, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_OS", "Os", 1021, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PACKAGER", "Packager", 1015, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PATCHESFLAGS", "Patchesflags", 1134, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PATCHESNAME", "Patchesname", 1133, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PATCHESVERSION", "Patchesversion", 1135, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PATCH", "Patch", 1019, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PAYLOADCOMPRESSOR", "Payloadcompressor", 1125, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PAYLOADFLAGS", "Payloadflags", 1126, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PAYLOADFORMAT", "Payloadformat", 1124, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PKGID", "Pkgid", RPMTAG_SIGMD5, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PLATFORM", "Platform", 1132, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POLICIES", "Policies", 1150, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_POSTIN", "Postin", 1024, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POSTINPROG", "Postinprog", 1086, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POSTTRANS", "Posttrans", 1152, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POSTTRANSPROG", "Posttransprog", 1154, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POSTUN", "Postun", 1026, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_POSTUNPROG", "Postunprog", 1088, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_P", "P", RPMTAG_PROVIDENAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PREFIXES", "Prefixes", 1098, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PREIN", "Prein", 1023, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PREINPROG", "Preinprog", 1085, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PRETRANS", "Pretrans", 1151, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PRETRANSPROG", "Pretransprog", 1153, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PREUN", "Preun", 1025, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PREUNPROG", "Preunprog", 1087, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_PROVIDEFLAGS", "Provideflags", 1112, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PROVIDENAME", "Providename", 1047, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PROVIDES", "Provides", RPMTAG_PROVIDENAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PROVIDEVERSION", "Provideversion", 1113, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_PUBKEYS", "Pubkeys", RPMTAG_SIG_BASE+10, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_RECONTEXTS", "Recontexts", 1149, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_RELEASE", "Release", 1002, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_REMOVETID", "Removetid", 1129, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_REQUIREFLAGS", "Requireflags", 1048, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_REQUIRENAME", "Requirename", 1049, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_REQUIRES", "Requires", RPMTAG_REQUIRENAME, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_REQUIREVERSION", "Requireversion", 1050, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_RHNPLATFORM", "Rhnplatform", 1131, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_RPMVERSION", "Rpmversion", 1064, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_R", "R", RPMTAG_RELEASE, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_RSAHEADER", "Rsaheader", RPMTAG_SIG_BASE+12, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SHA1HEADER", "Sha1header", RPMTAG_SIG_BASE+13, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SIGGPG", "Siggpg", RPMTAG_SIG_BASE+6, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SIGMD5", "Sigmd5", RPMTAG_SIG_BASE+5, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SIGPGP", "Sigpgp", RPMTAG_SIG_BASE+3, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SIGSIZE", "Sigsize", RPMTAG_SIG_BASE+1, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SIZE", "Size", 1009, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SOURCEPACKAGE", "Sourcepackage", 1106, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SOURCEPKGID", "Sourcepkgid", 1146, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SOURCERPM", "Sourcerpm", 1044, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_SOURCE", "Source", 1018, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_SUMMARY", "Summary", 1004, RPM_I18NSTRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERCONDS", "Triggerconds", 5005, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_TRIGGERFLAGS", "Triggerflags", 1068, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERINDEX", "Triggerindex", 1069, RPM_INT32_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERNAME", "Triggername", 1066, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERSCRIPTPROG", "Triggerscriptprog", 1092, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERSCRIPTS", "Triggerscripts", 1065, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_TRIGGERTYPE", "Triggertype", 5006, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 1 },
    { "RPMTAG_TRIGGERVERSION", "Triggerversion", 1067, RPM_STRING_ARRAY_TYPE + RPM_ARRAY_RETURN_TYPE, 0 },
    { "RPMTAG_URL", "Url", 1020, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_VENDOR", "Vendor", 1011, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_VERBOSE", "Verbose", 5018, RPM_INT32_TYPE + RPM_SCALAR_RETURN_TYPE, 1 },
    { "RPMTAG_VERIFYSCRIPTPROG", "Verifyscriptprog", 1091, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_VERIFYSCRIPT", "Verifyscript", 1079, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_VERSION", "Version", 1001, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_V", "V", RPMTAG_VERSION, RPM_STRING_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { "RPMTAG_XPM", "Xpm", 1013, RPM_BIN_TYPE + RPM_SCALAR_RETURN_TYPE, 0 },
    { NULL, NULL, 0, 0, 0 }
};
