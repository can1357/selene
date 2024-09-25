#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_7.Size", size, 0x0, 0x0, false, 0x241b12b1330f96a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.Disabled", disabled, 0x0, 0x0, false, 0x1ac40f3e447ed61e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0x52564337868b0b42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.Failed", failed, 0x0, 0x0, false, 0xc2bd9f74ef7ca00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.NotDisableable", not_disableable, 0x0, 0x0, false, 0xc6c9e1c31d6fe14b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.Removed", removed, 0x0, 0x0, false, 0xd71d7579297a669e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_7.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x11297509ab5bfa7f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif