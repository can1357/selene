#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.Size", size, 0x0, 0x0, false, 0xd01bfc11fb54bf16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.LockSupported", lock_supported, 0x0, 0x0, false, 0xac06f5a0e0d382ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.EjectSupported", eject_supported, 0x0, 0x0, false, 0x8e923880418fc2b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.Removable", removable, 0x0, 0x0, false, 0x46c86aada38793c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.DockDevice", dock_device, 0x0, 0x0, false, 0x9430c3c2181ade5e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.UniqueID", unique_id, 0x0, 0x0, false, 0x9d5087d47ef0a271)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.SilentInstall", silent_install, 0x0, 0x0, false, 0x6ef780ddc4af72da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0x2a46cec11e08a8cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0xc024efd62ee51bfc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0xcc96b0d3e9f1bf14)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.Address", address, 0x0, 0x0, false, 0x26fcc1a81c1f55e2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_15.UINumber", ui_number, 0x0, 0x0, false, 0xcc32f64c612a5953)
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