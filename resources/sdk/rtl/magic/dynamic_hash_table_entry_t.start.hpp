#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RTL_DYNAMIC_HASH_TABLE_ENTRY.Linkage", linkage, 0x0, 0x80, true, 0xd9330377ff8b84b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_DYNAMIC_HASH_TABLE_ENTRY.Signature", signature, 0x80, 0x40, true, 0x986bc9fcae34859e)
#else
#define _m00
#define _m01
#endif