#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REGION_OUTPUT.Flags", flags, 0x0, 0x20, true, 0x3b82b236242c03a5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REGION_OUTPUT.TotalRegionEntryCount", total_region_entry_count, 0x20, 0x20, true, 0xb89c10122903ae4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REGION_OUTPUT.RegionEntryCount", region_entry_count, 0x40, 0x20, true, 0xd921237b33816678)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::file_region_info_t, 1>), "_FILE_REGION_OUTPUT.Region", region, 0x80, 0xc0, true, 0x626829cd73fdbff2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif