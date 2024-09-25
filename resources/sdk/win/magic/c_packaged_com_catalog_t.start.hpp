#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CPackagedComCatalog._currentPackageOnly", current_package_only, 0x180, 0x8, true, 0xef0b513681966b56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CPackagedComCatalog._isUserHiveOk", is_user_hive_ok, 0x188, 0x8, true, 0x6ee05b89a4da95b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CPackagedComCatalog._isUserHiveOkForAllPackagesSubjectToPolicy", is_user_hive_ok_for_all_packages_subject_to_policy, 0x0, 0x0, false, 0x57a650ba5cf70ee9)
#else
#define _m00
#define _m01
#define _m02
#endif