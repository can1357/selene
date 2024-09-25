#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_STATE.Size", size, 0x0, 0x20, true, 0x96f10c18a8b32247)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.Disabled", disabled, 0x20, 0x20, true, 0x6e8ddc287721a4c4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.DontDisplayInUI", dont_display_in_ui, 0x40, 0x20, true, 0xf14012dd52da0e73)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.Failed", failed, 0x60, 0x20, true, 0xba7e808bd3a23f85)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.NotDisableable", not_disableable, 0x80, 0x20, true, 0x1881fc9497e5cd81)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.Removed", removed, 0xa0, 0x20, true, 0xa0e2439e1f746a24)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.ResourcesChanged", resources_changed, 0xc0, 0x20, true, 0x2990df1ad23c18ab)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_STATE.AssignedToGuest", assigned_to_guest, 0xe0, 0x20, true, 0xaf43da266d72834a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif