#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.Version", version, 0x0, 0x20, true, 0xea407b920e65f32)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.Size", size, 0x20, 0x20, true, 0xe5f516ed62e8ebb6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.Flags", flags, 0x40, 0x20, true, 0xce00e0308305fd05)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.Alignment", alignment, 0x80, 0x40, true, 0x799ce84c13529efd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.TotalNumberOfRegions", total_number_of_regions, 0xc0, 0x20, true, 0xb9d8a34e4717fefb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_OUTPUT.NumberOfRegionsReturned", number_of_regions_returned, 0xe0, 0x20, true, 0x9a6aca72758f96a6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::file_storage_tier_region_t, 1>), "_FSCTL_QUERY_REGION_INFO_OUTPUT.Regions", regions, 0x100, 0x0, true, 0xc5b6ce7403038a53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif