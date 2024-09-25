#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.Size", size, 0x0, 0x0, false, 0x246ee2e0c4123259)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.LockSupported", lock_supported, 0x0, 0x0, false, 0x98da088d7e928fbf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.EjectSupported", eject_supported, 0x0, 0x0, false, 0x45ad6c49f6a0daa2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.Removable", removable, 0x0, 0x0, false, 0xd8170fe605b4c086)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.DockDevice", dock_device, 0x0, 0x0, false, 0x8421f414bef92527)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.UniqueID", unique_id, 0x0, 0x0, false, 0xb5a4a519fc252b3c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.SilentInstall", silent_install, 0x0, 0x0, false, 0xe47aaa228d6bb17a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.SurpriseRemovalOK", surprise_removal_ok, 0x0, 0x0, false, 0xfdff7e2d645311f6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.HardwareDisabled", hardware_disabled, 0x0, 0x0, false, 0xd47e07769ef31270)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.NoDisplayInUI", no_display_in_ui, 0x0, 0x0, false, 0x71a661ad9211b98f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.Address", address, 0x0, 0x0, false, 0x615913adfa10144d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_PNP_CAPABILITIES_V1_0.UINumber", ui_number, 0x0, 0x0, false, 0x2906e637bf8d4d32)
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