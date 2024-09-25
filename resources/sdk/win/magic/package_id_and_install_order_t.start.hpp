#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "PackageIdAndInstallOrder.packageId", package_id, 0x0, 0x40, true, 0x43d564626cc21f31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PackageIdAndInstallOrder.installOrder", install_order, 0x40, 0x20, true, 0x11b24300ab32684b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PackageIdAndInstallOrder.isMachineAndSingletonButNotCurrentUserPackage", is_machine_and_singleton_but_not_current_user_package, 0x60, 0x8, true, 0x6be7bee1218a3219)
#else
#define _m00
#define _m01
#define _m02
#endif