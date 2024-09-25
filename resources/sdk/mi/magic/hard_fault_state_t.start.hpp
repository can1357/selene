#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_HARD_FAULT_STATE.SwapPfn", swap_pfn, 0x0, 0x40, true, 0x587e4d7ca80abc4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::store_inpage_complete_flags_t), "_MI_HARD_FAULT_STATE.StoreFlags", store_flags, 0x40, 0x20, true, 0x57a641df0e13af77)
#else
#define _m00
#define _m01
#endif