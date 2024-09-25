#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_1.Size", size, 0x0, 0x0, false, 0x35cf964b3c17f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.Disabled", disabled, 0x0, 0x0, false, 0xa223f5de0128ef99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0xb4884d5bdaad0558)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.Failed", failed, 0x0, 0x0, false, 0xc39e2f438182903a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.NotDisableable", not_disableable, 0x0, 0x0, false, 0xe049b0d004850ee9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.Removed", removed, 0x0, 0x0, false, 0x1be3ca743a633800)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_1.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x86f6c7c4634151e2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif