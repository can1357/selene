#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.Size", size, 0x0, 0x0, false, 0x171269df8f310da9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.LockSupported", lock_supported, 0x0, 0x0, false, 0x94d177a3ed081ce0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.EjectSupported", eject_supported, 0x0, 0x0, false, 0x2ccfa9b8869a529f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.Removable", removable, 0x0, 0x0, false, 0xd2b7fe8a092ab372)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.DockDevice", dock_device, 0x0, 0x0, false, 0x7ed64050109ac317)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.UniqueID", unique_id, 0x0, 0x0, false, 0x9b20945758136b96)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.SilentInstall", silent_install, 0x0, 0x0, false, 0x5af1b97cabd6cae2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0xa13f377f6b2ecfe0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0x4da5716701636d4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0x4c1189e9aa365d97)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.Address", address, 0x0, 0x0, false, 0x4e3dfa4aa5aae26a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_17.UINumber", ui_number, 0x0, 0x0, false, 0x8a51c51ae0681d85)
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