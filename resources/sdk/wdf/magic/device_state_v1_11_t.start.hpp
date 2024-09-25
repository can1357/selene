#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_11.Size", size, 0x0, 0x0, false, 0xf137269260805951)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.Disabled", disabled, 0x0, 0x0, false, 0x3fde7d8820f7f770)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0x2303a34e40506d8c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.Failed", failed, 0x0, 0x0, false, 0xb491bf88269ab26a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.NotDisableable", not_disableable, 0x0, 0x0, false, 0x762c2f62736627c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.Removed", removed, 0x0, 0x0, false, 0xa4027d165d79d3e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_11.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x97b42592339520a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif