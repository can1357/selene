#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE_V1_0.Size", size, 0x0, 0x0, false, 0xdd8bac45e6333ca1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.Disabled", disabled, 0x0, 0x0, false, 0x47c9dbe1ac10671d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.DontDisplayInUI", dont_display_in_ui, 0x0, 0x0, false, 0xb5c9c7bbec73806c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.Failed", failed, 0x0, 0x0, false, 0x5f66ea07a8823703)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.NotDisableable", not_disableable, 0x0, 0x0, false, 0x9cd5553fec8155d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.Removed", removed, 0x0, 0x0, false, 0x83ddfebf65fb7acb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE_V1_0.ResourcesChanged", resources_changed, 0x0, 0x0, false, 0xda33edffe7a3fa97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif