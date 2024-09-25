#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.Size", size, 0x0, 0x0, false, 0xe3854f8173e8eac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.LockSupported", lock_supported, 0x0, 0x0, false, 0x4f0df7f0a68532a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.EjectSupported", eject_supported, 0x0, 0x0, false, 0xa92e017c81a18196)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.Removable", removable, 0x0, 0x0, false, 0xd8e29615575b2273)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.DockDevice", dock_device, 0x0, 0x0, false, 0x315af2c7874b4a43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.UniqueID", unique_id, 0x0, 0x0, false, 0x7a85665a631f7e8d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.SilentInstall", silent_install, 0x0, 0x0, false, 0xb5532e327b81797c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0x6230ee208266e5cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0xf0f078cb05c4a163)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0x68b9d2c9f84fa2df)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.Address", address, 0x0, 0x0, false, 0xdc8b4641373b9abd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_5.UINumber", ui_number, 0x0, 0x0, false, 0x74647d260caefd78)
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