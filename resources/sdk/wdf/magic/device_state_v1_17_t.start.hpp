#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_17.Size", size, 0x0, 0x0, false, 0x815185fb4ca5ee4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.Disabled", disabled, 0x0, 0x0, false, 0x64669898a3c7c450)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0xe8b70078bf458d1a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.Failed", failed, 0x0, 0x0, false, 0x5c2c422f65592cab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.NotDisableable", not_disableable, 0x0, 0x0, false, 0x58e9f7896c37536b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.Removed", removed, 0x0, 0x0, false, 0x1504fa875ed15d6b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_17.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x3cc40fc055852003)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif