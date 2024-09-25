#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.Size", size, 0x0, 0x0, false, 0x6191a7970bb0ed35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.LockSupported", lock_supported, 0x0, 0x0, false, 0xcac0e74c479d8da8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.EjectSupported", eject_supported, 0x0, 0x0, false, 0x4ab65ed3a4586b45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.Removable", removable, 0x0, 0x0, false, 0x760bf27f7b22687)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.DockDevice", dock_device, 0x0, 0x0, false, 0x3139fdf24d1085e1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.UniqueID", unique_id, 0x0, 0x0, false, 0xb6ab58da66d0cd68)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.SilentInstall", silent_install, 0x0, 0x0, false, 0xab3d8546eb8905a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0x14e20189514a3c76)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0x241f82bc870e5382)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0xc5bd5b2354f93ef6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.Address", address, 0x0, 0x0, false, 0x80cdf79fa0679291)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_11.UINumber", ui_number, 0x0, 0x0, false, 0x154c13e971aea9fc)
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