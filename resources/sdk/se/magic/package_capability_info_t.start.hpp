#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_PACKAGE_CAPABILITY_INFO.Remaining", remaining, 0x0, 0x20, true, 0x536d44046627e51b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_PACKAGE_CAPABILITY_INFO.PackageGrantedAccess", package_granted_access, 0x20, 0x20, true, 0x76a3c1f541f762c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_PACKAGE_CAPABILITY_INFO.CapabilityGrantedAccess", capability_granted_access, 0x40, 0x20, true, 0x679fed53ea1526ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_PACKAGE_CAPABILITY_INFO.UserGroupsRemaining", user_groups_remaining, 0x60, 0x20, true, 0x158aa071e142e8c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_PACKAGE_CAPABILITY_INFO.PackagesPresent", packages_present, 0xa0, 0x8, true, 0x80be04ddcf387cc6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_PACKAGE_CAPABILITY_INFO.PackageMatch", package_match, 0xa8, 0x8, true, 0x56b677e6a3654d95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_PACKAGE_CAPABILITY_INFO.CapabilityMatch", capability_match, 0xb0, 0x8, true, 0xc3ed2c1739e37f1c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_PACKAGE_CAPABILITY_INFO.LogPermissiveFailure", log_permissive_failure, 0xb8, 0x8, true, 0x6c493708477dd612)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_PACKAGE_CAPABILITY_INFO.AllAppPackagesSkippedAccess", all_app_packages_skipped_access, 0x80, 0x20, true, 0xc7feebc3d1699fb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SE_PACKAGE_CAPABILITY_INFO.AllAppPackagesSkipped", all_app_packages_skipped, 0xc0, 0x8, true, 0xd5f454abdc708e3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif