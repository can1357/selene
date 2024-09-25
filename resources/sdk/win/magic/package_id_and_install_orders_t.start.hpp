#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "PackageIdAndInstallOrders.packageId", package_id, 0x0, 0x0, false, 0x64ee2e344ce3625f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PackageIdAndInstallOrders.userInstallOrder", user_install_order, 0x0, 0x0, false, 0x3cf0ac98e755824b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PackageIdAndInstallOrders.machineInstallOrder", machine_install_order, 0x0, 0x0, false, 0x716d64c102c5d691)
#else
#define _m00
#define _m01
#define _m02
#endif