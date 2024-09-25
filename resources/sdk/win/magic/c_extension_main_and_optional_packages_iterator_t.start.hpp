#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionMainAndOptionalPackagesIterator._contractId", contract_id, 0x80, 0x40, true, 0x88e6f8aa669083e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CExtensionMainAndOptionalPackagesIterator._processingUserApps", processing_user_apps, 0x100, 0x8, true, 0x207b662c26cab74e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionMainAndOptionalPackagesIterator._currentDeployingPackageId", current_deploying_package_id, 0x200, 0x40, true, 0x1a26c19cab01f3b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionMainAndOptionalPackagesIterator._currentEffectivePackageId", current_effective_package_id, 0x240, 0x40, true, 0x6789bee5c2b29396)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionMainAndOptionalPackagesIterator._mainPackageId", main_package_id, 0x280, 0x40, true, 0xcf6cfe898e2f1738)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CExtensionMainAndOptionalPackagesIterator._processingOptionalPackages", processing_optional_packages, 0x2c0, 0x8, true, 0x9f511ea03542826c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtensionMainAndOptionalPackagesIterator._currentOptionalPackageIndex", current_optional_package_index, 0x380, 0x20, true, 0x7bd0126f74dde144)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif