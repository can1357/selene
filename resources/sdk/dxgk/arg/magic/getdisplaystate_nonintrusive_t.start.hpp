#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE.NumOfTargets", num_of_targets, 0x0, 0x20, true, 0x9281e931100f9e7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE.SizeOfDisplayStateNonIntrusiveElement", size_of_display_state_non_intrusive_element, 0x20, 0x20, true, 0x71ee0a614fe5c80e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::displaystate_nonintrusive_t**), "_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE.ppDisplayStateNonIntrusive", pp_display_state_non_intrusive, 0x40, 0x40, true, 0x8207ba90d38fdc81)
#else
#define _m00
#define _m01
#define _m02
#endif