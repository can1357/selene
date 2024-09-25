#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_COMMON_PAGE_STATE.PageOfOnesPfn", page_of_ones_pfn, 0x0, 0x40, true, 0x5ca71f790a986605)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.PageOfOnes", page_of_ones, 0x40, 0x40, true, 0xea9373fcc9b7e52b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_COMMON_PAGE_STATE.DummyPagePfn", dummy_page_pfn, 0x80, 0x40, true, 0xa66c12fdba895db4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.DummyPage", dummy_page, 0xc0, 0x40, true, 0xe16f1980e9576ab4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.PageOfZeroes", page_of_zeroes, 0x100, 0x40, true, 0x6847e6fc9b01c95d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_COMMON_PAGE_STATE.ZeroMapping", zero_mapping, 0x140, 0x40, true, 0x2ce9b8e50bdd8570)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_COMMON_PAGE_STATE.OnesMapping", ones_mapping, 0x180, 0x40, true, 0x5904c46902a00711)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.ZeroCrc", zero_crc, 0x1c0, 0x40, true, 0x9a0a70f8c8d2a83)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.OnesCrc", ones_crc, 0x200, 0x40, true, 0x8d71e19bafc0425b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.PageTableOfZeroes", page_table_of_zeroes, 0x440, 0x40, true, 0x8940487dc1597cee)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MI_COMMON_PAGE_STATE.PdeOfZeroes", pde_of_zeroes, 0x480, 0x40, true, 0x5633ed9844fb4b63)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMMON_PAGE_STATE.PageTableOfOnes", page_table_of_ones, 0x4c0, 0x40, true, 0xf90f620a11958dc0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MI_COMMON_PAGE_STATE.PdeOfOnes", pde_of_ones, 0x500, 0x40, true, 0xe10b6a53bb9edd68)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_COMMON_PAGE_STATE.BitmapGapFrames", bitmap_gap_frames, 0x240, 0x0, true, 0xac86d1dcda52b139)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_COMMON_PAGE_STATE.PfnGapFrames", pfn_gap_frames, 0x340, 0x0, true, 0x8d40797b3fdd9411)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_COMMON_PAGE_STATE.OnesGapFrames", ones_gap_frames, 0x0, 0x0, false, 0x237cdf36076de8cb)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_COMMON_PAGE_STATE.ZeroesGapFrames", zeroes_gap_frames, 0x0, 0x0, false, 0x89e4b5742e8785e4)
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
#define _m15
#define _m16
#endif