#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUAL.Length", length, 0x0, 0x20, true, 0xa6d0550ee7cf8300)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hmap_directory_t*), "_DUAL.Map", map, 0x40, 0x40, true, 0x76d7cdf39a4cb170)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hmap_table_t*), "_DUAL.SmallDir", small_dir, 0x80, 0x40, true, 0x684723f444efb940)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUAL.Guard", guard, 0xc0, 0x20, true, 0x5252a62f03a4430)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::free_display_t, 24>), "_DUAL.FreeDisplay", free_display, 0x100, 0x0, true, 0xb8a666dea0653d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DUAL.FreeBins", free_bins, 0x1300, 0x80, true, 0xefdc1707f97f139e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUAL.FreeSummary", free_summary, 0x1380, 0x20, true, 0x1d62a1f02c9f6405)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif