#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPL_LOOKASIDE_LIST_ARRAY.ValidEntryCount", valid_entry_count, 0x0, 0x20, true, 0xd4d28490aa6bee7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPL_LOOKASIDE_LIST_ARRAY.Flags", flags, 0x20, 0x20, true, 0xdc021f0be00242bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPL_LOOKASIDE_LIST_ARRAY.Tag", tag, 0x40, 0x20, true, 0xf3962bde23f39bd1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPL_LOOKASIDE_LIST_ARRAY.LookasideTag", lookaside_tag, 0x60, 0x20, true, 0x6d1085624676863a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPL_LOOKASIDE_LIST_ARRAY.Size", size, 0x80, 0x40, true, 0xba677153474b056e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_PPL_LOOKASIDE_LIST_ARRAY.PoolType", pool_type, 0xc0, 0x20, true, 0x5dbf29a65e321044)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PPL_LOOKASIDE_LIST_ARRAY.Depth", depth, 0xe0, 0x10, true, 0x2f3c29471d32a72c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct ndis::ppl_lookaside_list_t**, sdk::array<struct ndis::ppl_lookaside_list_t>>), "_PPL_LOOKASIDE_LIST_ARRAY.LookasideLists", lookaside_lists, 0x100, 0x40, true, 0x903e449d5fcf1846)
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