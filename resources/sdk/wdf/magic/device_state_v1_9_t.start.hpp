#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_9.Size", size, 0x0, 0x0, false, 0xaf7ba3f439a9950b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.Disabled", disabled, 0x0, 0x0, false, 0x30d1848f1d8047b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0xedf16b1e29fecf5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.Failed", failed, 0x0, 0x0, false, 0x4cccae7ef263507b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.NotDisableable", not_disableable, 0x0, 0x0, false, 0xf277820691831308)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.Removed", removed, 0x0, 0x0, false, 0x285686a55241f9ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_9.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0xfad764a484dfbaf1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif