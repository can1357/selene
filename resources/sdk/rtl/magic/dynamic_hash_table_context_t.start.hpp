#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_RTL_DYNAMIC_HASH_TABLE_CONTEXT.ChainHead", chain_head, 0x0, 0x40, true, 0x6a88c6ea5a928ded)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_RTL_DYNAMIC_HASH_TABLE_CONTEXT.PrevLinkage", prev_linkage, 0x40, 0x40, true, 0xbba72f7733241466)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DYNAMIC_HASH_TABLE_CONTEXT.Signature", signature, 0x80, 0x40, true, 0x3188b24138e6e19e)
#else
#define _m00
#define _m01
#define _m02
#endif