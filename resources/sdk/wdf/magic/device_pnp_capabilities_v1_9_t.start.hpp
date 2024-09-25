#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.Size", size, 0x0, 0x0, false, 0x2b43b86cdaf7cfeb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.LockSupported", lock_supported, 0x0, 0x0, false, 0xcb5ef63c82f3bbf1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.EjectSupported", eject_supported, 0x0, 0x0, false, 0x29ac0220498e9e4b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.Removable", removable, 0x0, 0x0, false, 0xf31716439be70ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.DockDevice", dock_device, 0x0, 0x0, false, 0x6bb3e40ab207582b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.UniqueID", unique_id, 0x0, 0x0, false, 0xd994975ca6ce2375)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.SilentInstall", silent_install, 0x0, 0x0, false, 0xd171b3f74f3a8cd8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0x8ee166c8460f22b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0x76d1a6a67e3e1347)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0xca690dcbb338c1a3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.Address", address, 0x0, 0x0, false, 0x9a5ace7625dbd630)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_9.UINumber", ui_number, 0x0, 0x0, false, 0xf29c1925ba0aad3e)
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
#define _m10
#define _m11
#endif