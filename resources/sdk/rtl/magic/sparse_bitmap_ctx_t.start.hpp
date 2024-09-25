#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_SPARSE_BITMAP_CTX.Lock", lock, 0x0, 0x40, true, 0x7d2faa1a2925b344)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::sparse_bitmap_range_t**), "_RTL_SPARSE_BITMAP_CTX.BitmapRanges", bitmap_ranges, 0x40, 0x40, true, 0x49079acc07812b7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_RTL_SPARSE_BITMAP_CTX.RangeArrayCommitStatus", range_array_commit_status, 0x80, 0x80, true, 0x753ac5c3bc0030c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_RTL_SPARSE_BITMAP_CTX.AllocateRoutine", allocate_routine, 0x100, 0x40, true, 0x3754583a32e6bddb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RTL_SPARSE_BITMAP_CTX.FreeRoutine", free_routine, 0x140, 0x40, true, 0x1ce0621400c4e0a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.RangeCount", range_count, 0x180, 0x20, true, 0x3e391ff2f95814a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.RangeIndexLimit", range_index_limit, 0x1a0, 0x20, true, 0xf5b29d52e61d1797)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.BitsPerRange", bits_per_range, 0x1c0, 0x20, true, 0x57b06f9cb8bcfca5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.RangeCountMax", range_count_max, 0x1e0, 0x20, true, 0x1ce827d6fe083516)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.RangeMetadataOffset", range_metadata_offset, 0x200, 0x20, true, 0xb1501223a2b26671)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_BITMAP_CTX.MetadataSizePerBit", metadata_size_per_bit, 0x220, 0x20, true, 0x7380e75c1ad4b7f9)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_CTX.DefaultBitsSet", default_bits_set, 0x240, 0x1, true, 0x75dd5a37f7a70225, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_CTX.SparseRangeArray", sparse_range_array, 0x241, 0x1, true, 0x3367936793edafee, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SPARSE_BITMAP_CTX.NoInternalLocking", no_internal_locking, 0x242, 0x1, true, 0x224abe2fe70c543, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_RTL_SPARSE_BITMAP_CTX.SpareFlags", spare_flags, 0x243, 0x1d, true, 0xa56234eefb51c3cb, 29, uint32_t)
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
#define _m14
#endif