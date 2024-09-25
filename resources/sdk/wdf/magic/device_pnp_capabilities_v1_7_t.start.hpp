#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.Size", size, 0x0, 0x0, false, 0xb75a825038ef0e55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.LockSupported", lock_supported, 0x0, 0x0, false, 0x7fc959271609fe6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.EjectSupported", eject_supported, 0x0, 0x0, false, 0xf37379756b0b524a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.Removable", removable, 0x0, 0x0, false, 0x90fc03eedbcc15d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.DockDevice", dock_device, 0x0, 0x0, false, 0x6f5db1dba1cd496)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.UniqueID", unique_id, 0x0, 0x0, false, 0xa194e78bd1c33217)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.SilentInstall", silent_install, 0x0, 0x0, false, 0xd0a01a4b1c546367)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0xbf6235b0407a1811)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0xafe7c04dd9bc7299)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0x7f26ec7e30aba71e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.Address", address, 0x0, 0x0, false, 0xf1d90569b185a07f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_7.UINumber", ui_number, 0x0, 0x0, false, 0x1cb187fc5ccf3153)
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