#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.Valid", valid, 0x0, 0x1, true, 0x482a0229940a0c29, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.Zero", zero, 0x1, 0x1, true, 0x7e98104df18d317f, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.CacheCoherent", cache_coherent, 0x2, 0x1, true, 0xe80e06458725fa60, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.ReadOnly", read_only, 0x3, 0x1, true, 0x52b6c2fe9d6ee62d, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.NoExecute", no_execute, 0x4, 0x1, true, 0xade5a25cc7f679c5, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXGK_PTE.Segment", segment, 0x5, 0x5, true, 0xd879d94e7ea3f9d9, 5, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.LargePage", large_page, 0xa, 0x1, true, 0xaffd35b222c7ac64, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DXGK_PTE.PhysicalAdapterIndex", physical_adapter_index, 0xb, 0x6, true, 0x46b89bfcebb8e0b2, 6, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXGK_PTE.PageTablePageSize", page_table_page_size, 0x11, 0x2, true, 0x50d5b2a00b681141, 2, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PTE.SystemReserved0", system_reserved0, 0x13, 0x1, true, 0x8c496838297e5da3, 1, uint64_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_PTE.Flags", flags, 0x0, 0x40, true, 0x537c2801a6e62573)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_PTE.PageAddress", page_address, 0x40, 0x40, true, 0xdca82bfd3233e50)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_PTE.PageTableAddress", page_table_address, 0x40, 0x40, true, 0x7a573d3357b97d21)
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
#define _m10
#define _m11
#define _m12
#endif