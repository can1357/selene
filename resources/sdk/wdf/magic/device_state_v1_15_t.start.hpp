#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_15.Size", size, 0x0, 0x0, false, 0xf98d4ee4d21cfed4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.Disabled", disabled, 0x0, 0x0, false, 0xff55b2b90af5c01c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0x6d526ce6bfa54e24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.Failed", failed, 0x0, 0x0, false, 0xa281adf09362bd65)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.NotDisableable", not_disableable, 0x0, 0x0, false, 0x1559a1b553ce9c7f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.Removed", removed, 0x0, 0x0, false, 0xdf7ab6ab924cc13c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_15.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0x51147f4b36caf6bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif