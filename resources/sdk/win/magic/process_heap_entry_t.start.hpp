#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HEAP_ENTRY.lpData", lp_data, 0x0, 0x40, true, 0x7b300b5d8e55b29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HEAP_ENTRY.cbData", cb_data, 0x40, 0x20, true, 0xa03e4a04079f7cf1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_HEAP_ENTRY.cbOverhead", cb_overhead, 0x60, 0x8, true, 0x75c583000f4fa00f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESS_HEAP_ENTRY.iRegionIndex", i_region_index, 0x68, 0x8, true, 0xcb555c4d384a211d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_HEAP_ENTRY.wFlags", w_flags, 0x70, 0x10, true, 0xafbbc610150cc290)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HEAP_ENTRY.Block.hMem", h_mem, 0x0, 0x40, true, 0xc124666d588dd0fc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_PROCESS_HEAP_ENTRY.Block.dwReserved", dw_reserved, 0x40, 0x60, true, 0xd03c049303f5e220)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_block_t), "_PROCESS_HEAP_ENTRY.Block", block, 0x80, 0xc0, true, 0x32d1099c68da38b5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HEAP_ENTRY.Region.dwCommittedSize", dw_committed_size, 0x0, 0x20, true, 0x9b312994ad1575da)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HEAP_ENTRY.Region.dwUnCommittedSize", dw_un_committed_size, 0x20, 0x20, true, 0x6629b935fa13dd4b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HEAP_ENTRY.Region.lpFirstBlock", lp_first_block, 0x40, 0x40, true, 0xb0856003dadfb673)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HEAP_ENTRY.Region.lpLastBlock", lp_last_block, 0x80, 0x40, true, 0xfaa789bae6c7b05b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_region_t), "_PROCESS_HEAP_ENTRY.Region", region, 0x80, 0xc0, true, 0x243e07121c688957)
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