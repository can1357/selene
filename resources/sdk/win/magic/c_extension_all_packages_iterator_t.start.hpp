#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionAllPackagesIterator._contractId", contract_id, 0x80, 0x40, true, 0xcd2d47e970e23f9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CExtensionAllPackagesIterator._processingUserApps", processing_user_apps, 0x100, 0x8, true, 0x35114bd893e73f36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionAllPackagesIterator._currentDeployingPackageId", current_deploying_package_id, 0x200, 0x40, true, 0x681cfb885a6a46bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionAllPackagesIterator._currentEffectivePackageId", current_effective_package_id, 0x240, 0x40, true, 0xb8484529fb1c11ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtensionAllPackagesIterator._currentPackageIndex", current_package_index, 0x300, 0x20, true, 0x466bc5d8c996482c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif