#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_5.Size", size, 0x0, 0x0, false, 0x3a5bb45debcc3d39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.Disabled", disabled, 0x0, 0x0, false, 0xcf31aab15261f628)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0x7fde8e9cb2a2c331)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.Failed", failed, 0x0, 0x0, false, 0xb2dfc64b1ec4db83)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.NotDisableable", not_disableable, 0x0, 0x0, false, 0x1fa7f8ea471bb527)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.Removed", removed, 0x0, 0x0, false, 0xe25523de71ab10c9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_5.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0xf1b2f1983d480cfa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif