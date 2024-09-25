#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HMAP_ENTRY.BlockOffset", block_offset, 0x0, 0x40, true, 0x82ae229c5361875f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HMAP_ENTRY.PermanentBinAddress", permanent_bin_address, 0x40, 0x40, true, 0xf32b35ac4d1b2906)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HMAP_ENTRY.MemAlloc", mem_alloc, 0x80, 0x20, true, 0x5c695a724b99a0e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HMAP_ENTRY.TemporaryBinAddress", temporary_bin_address, 0x0, 0x0, false, 0x92ae5c72443cbb1a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_HMAP_ENTRY.TemporaryBinRundown", temporary_bin_rundown, 0x0, 0x0, false, 0xbb220ce932cf1748)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif