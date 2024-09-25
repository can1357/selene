#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Valid", valid, 0x0, 0x1, true, 0x277719b4fea2d536, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Write", write, 0x1, 0x1, true, 0x9c1e0ed51c63c9bc, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Owner", owner, 0x2, 0x1, true, 0x43d77a73a41fe314, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.WriteThrough", write_through, 0x3, 0x1, true, 0x4f078ae97ef53ea8, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.CacheDisable", cache_disable, 0x4, 0x1, true, 0x96e378d36c3a9e59, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Accessed", accessed, 0x5, 0x1, true, 0x6825c25acffcbf27, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Dirty", dirty, 0x6, 0x1, true, 0xd3f7921191271f70, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.LargePage", large_page, 0x7, 0x1, true, 0x7aa7a4d24a086ffe, 1, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Global", global, 0x8, 0x1, true, 0x8a97f603cea59141, 1, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.CopyOnWrite", copy_on_write, 0x9, 0x1, true, 0x16c421c2644bac96, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.Prototype", prototype, 0xa, 0x1, true, 0x2026cffb88e65198, 1, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint40_t), "_HARDWARE_PTE.PageFrameNumber", page_frame_number, 0xc, 0x24, true, 0xd1a4d455aaaf787b, 0, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_HARDWARE_PTE.SoftwareWsIndex", software_ws_index, 0x34, 0xb, true, 0x9373643b150839c6, 11, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HARDWARE_PTE.NoExecute", no_execute, 0x3f, 0x1, true, 0x5052f2b397da549f, 1, uint64_t)
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
#define _m13
#endif