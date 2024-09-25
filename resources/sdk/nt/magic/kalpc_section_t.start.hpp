#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_SECTION.SectionObject", section_object, 0x0, 0x40, true, 0x141da8362d71fb73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_SECTION.Size", size, 0x40, 0x40, true, 0x78b3a77a9029c0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_table_t*), "_KALPC_SECTION.HandleTable", handle_table, 0x80, 0x40, true, 0xa37dca2191876437)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_SECTION.SectionHandle", section_handle, 0xc0, 0x40, true, 0x4a66fa9afca0f3f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_KALPC_SECTION.OwnerProcess", owner_process, 0x100, 0x40, true, 0x182e9811b71b1d22)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_SECTION.OwnerPort", owner_port, 0x140, 0x40, true, 0xffd9e3112bf7b8d)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_SECTION.Internal", internal, 0x180, 0x1, true, 0xa444d7cbb1b45336, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_SECTION.Secure", secure, 0x181, 0x1, true, 0x4cc0967390d1a275, 1, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_SECTION.NumberOfRegions", number_of_regions, 0x1a0, 0x20, true, 0x9383a1e9fdb41cbd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KALPC_SECTION.RegionListHead", region_list_head, 0x1c0, 0x80, true, 0x6a32ab32ff83c752)
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