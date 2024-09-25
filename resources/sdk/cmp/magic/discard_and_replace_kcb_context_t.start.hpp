#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.BaseKcb", base_kcb, 0x0, 0x40, true, 0x818c878f367cc618)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.PrepareStatus", prepare_status, 0x40, 0x20, true, 0x62ad8482a245fd8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.ClonedKcbListHead", cloned_kcb_list_head, 0x80, 0x80, true, 0x5e0e06fac75b7147)
#else
#define _m00
#define _m01
#define _m02
#endif