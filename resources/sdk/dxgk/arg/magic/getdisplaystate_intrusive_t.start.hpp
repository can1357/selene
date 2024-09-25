#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDISPLAYSTATE_INTRUSIVE.NumOfTargets", num_of_targets, 0x0, 0x20, true, 0x475448fed1bf031e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDISPLAYSTATE_INTRUSIVE.SizeOfDisplayStateIntrusiveElement", size_of_display_state_intrusive_element, 0x20, 0x20, true, 0x5643a5d8de436e0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::arg::displaystate_intrusive_t**), "_DXGKARG_GETDISPLAYSTATE_INTRUSIVE.ppDisplayStateIntrusive", pp_display_state_intrusive, 0x40, 0x40, true, 0x7cb5e4f754dbe461)
#else
#define _m00
#define _m01
#define _m02
#endif