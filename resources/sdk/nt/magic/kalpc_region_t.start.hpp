#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_REGION.RegionListEntry", region_list_entry, 0x0, 0x80, true, 0xbb8836b0ab8f7d88)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_section_t*), "_KALPC_REGION.Section", section, 0x80, 0x40, true, 0xa9fa78cb47a937f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_REGION.Offset", offset, 0xc0, 0x40, true, 0x3b4e5238b25f222b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_REGION.Size", size, 0x100, 0x40, true, 0xcd09e285f6ec9e25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_REGION.ViewSize", view_size, 0x140, 0x40, true, 0xcb4a64ef7f834693)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_REGION.Secure", secure, 0x180, 0x1, true, 0x424e5a111ae466e2, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_REGION.NumberOfViews", number_of_views, 0x1a0, 0x20, true, 0xa669bb9878330782)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_REGION.ViewListHead", view_list_head, 0x1c0, 0x80, true, 0x9ddff00fa3c14bac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_view_t*), "_KALPC_REGION.ReadOnlyView", read_only_view, 0x240, 0x40, true, 0x7d9b48bd60792a50)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kalpc_view_t*), "_KALPC_REGION.ReadWriteView", read_write_view, 0x280, 0x40, true, 0xbe6ee2cf567b64a1)
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
#define _m09
#endif