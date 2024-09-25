#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_13.Size", size, 0x0, 0x0, false, 0x222a4dbfa99f5474)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.Disabled", disabled, 0x0, 0x0, false, 0x2c15a10bd852db8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0x19d988fe33d4b12f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.Failed", failed, 0x0, 0x0, false, 0x5e3cd8371bd79ab9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.NotDisableable", not_disableable, 0x0, 0x0, false, 0x999ff7fd6558ec3e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.Removed", removed, 0x0, 0x0, false, 0xfa5dc1895f010281)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_13.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x8ef254f1e572723d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif