#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::list_lookup_t*), "_HEAP_LIST_LOOKUP.ExtendedLookup", extended_lookup, 0x0, 0x40, true, 0xc2be5bbc15b84692)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LIST_LOOKUP.ArraySize", array_size, 0x40, 0x20, true, 0x5d603cddaacaa3c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LIST_LOOKUP.ExtraItem", extra_item, 0x60, 0x20, true, 0x48c9dfb8daba0b7c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LIST_LOOKUP.ItemCount", item_count, 0x80, 0x20, true, 0x20abd2ac5d94b182)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LIST_LOOKUP.OutOfRangeItems", out_of_range_items, 0xa0, 0x20, true, 0x5a0e6059d54b387e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LIST_LOOKUP.BaseIndex", base_index, 0xc0, 0x20, true, 0xa8601f758c87f6c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_HEAP_LIST_LOOKUP.ListHead", list_head, 0x100, 0x40, true, 0x38b727d3c70d30f9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_HEAP_LIST_LOOKUP.ListsInUseUlong", lists_in_use_ulong, 0x140, 0x40, true, 0x16fb74aa68b728dc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t**), "_HEAP_LIST_LOOKUP.ListHints", list_hints, 0x180, 0x40, true, 0x549093aa1a3aff3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif