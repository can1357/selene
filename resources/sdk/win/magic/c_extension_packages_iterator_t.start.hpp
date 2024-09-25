#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionPackagesIterator._contractId", contract_id, 0x80, 0x40, true, 0x84f006dcdc4b0c7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CExtensionPackagesIterator._processingUserApps", processing_user_apps, 0x100, 0x8, true, 0x1c464ea7caf45310)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionPackagesIterator._currentDeployingPackageId", current_deploying_package_id, 0x200, 0x40, true, 0x77460404040cc348)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionPackagesIterator._currentEffectivePackageId", current_effective_package_id, 0x240, 0x40, true, 0x9bc61d4d89d5494b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif