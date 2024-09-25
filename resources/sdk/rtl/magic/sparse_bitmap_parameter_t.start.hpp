#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_SPARSE_BITMAP_PARAMETER.BitCountMax", bit_count_max, 0x0, 0x40, true, 0x8b7229009d855124)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_PARAMETER.MetadataSizePerBit", metadata_size_per_bit, 0x40, 0x20, true, 0x85456ae1490763a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_PARAMETER.BitsPerRange", bits_per_range, 0x60, 0x20, true, 0xd462b781edc9f12e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_PARAMETER.RangeCountMax", range_count_max, 0x80, 0x20, true, 0x9e4ee0603949bdb5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_RTL_SPARSE_BITMAP_PARAMETER.AllocateRoutine", allocate_routine, 0xc0, 0x40, true, 0xe983e6e667d3d4b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RTL_SPARSE_BITMAP_PARAMETER.FreeRoutine", free_routine, 0x100, 0x40, true, 0x8d8b36a708edd512)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_PARAMETER.DefaultBitsSet", default_bits_set, 0x140, 0x1, true, 0x30fa63cf16481255, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_PARAMETER.SparseRangeArray", sparse_range_array, 0x141, 0x1, true, 0xf329e30642c747e8, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_PARAMETER.NoInternalLocking", no_internal_locking, 0x142, 0x1, true, 0x3ae01057e037b7bb, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_RTL_SPARSE_BITMAP_PARAMETER.SpareFlags", spare_flags, 0x143, 0x1d, true, 0x20795258cbe696fc, 29, uint32_t)
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