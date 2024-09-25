#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_27.Size", size, 0x0, 0x20, true, 0xf9857e84b1e3ed4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.Disabled", disabled, 0x20, 0x20, true, 0x982f0d78cd9cfa06)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.DontDisplayInUI", dont_display_in_ui, 0x40, 0x20, true, 0x69909b161c0cd9bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.Failed", failed, 0x60, 0x20, true, 0xfd7d60a5a2e7fc4c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.NotDisableable", not_disableable, 0x80, 0x20, true, 0x200637cfacf3a2d4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.Removed", removed, 0xa0, 0x20, true, 0xee1978acaf4f7807)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_27.ResourcesChanged", resources_changed, 0xc0, 0x20, true, 0xafd6a84f201da2de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif