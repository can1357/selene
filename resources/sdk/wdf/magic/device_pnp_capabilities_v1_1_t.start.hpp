#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.Size", size, 0x0, 0x0, false, 0xba9663e4cee7004a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.LockSupported", lock_supported, 0x0, 0x0, false, 0xa4ee6d306a272847)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.EjectSupported", eject_supported, 0x0, 0x0, false, 0x763cd9317f8b8259)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.Removable", removable, 0x0, 0x0, false, 0x1c3451b07109e71a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.DockDevice", dock_device, 0x0, 0x0, false, 0xa50b006430e11a7f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.UniqueID", unique_id, 0x0, 0x0, false, 0xcaab5258d7c322b3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.SilentInstall", silent_install, 0x0, 0x0, false, 0x8c67d824f4b6cffa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0xc6f2d943b423424c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0x2b0af48a98710073)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0x80b6f57fdd2e73e8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.Address", address, 0x0, 0x0, false, 0x7edda707b9acefc3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_1.UINumber", ui_number, 0x0, 0x0, false, 0xabd98e2bdb68fcea)
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