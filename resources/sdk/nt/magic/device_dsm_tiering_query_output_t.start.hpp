#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.Version", version, 0x0, 0x20, true, 0x757cf6ec289528c7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.Size", size, 0x20, 0x20, true, 0x2b0e6b141f4d7d6d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.Flags", flags, 0x40, 0x20, true, 0x832cd2306fb9688c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.Alignment", alignment, 0x80, 0x40, true, 0x8c743e276bcbdc18)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.TotalNumberOfRegions", total_number_of_regions, 0xc0, 0x20, true, 0x412251eac87d275)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.NumberOfRegionsReturned", number_of_regions_returned, 0xe0, 0x20, true, 0xac406b88ab614435)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_tier_region_t, 1>), "_DEVICE_DSM_TIERING_QUERY_OUTPUT.Regions", regions, 0x100, 0x0, true, 0x38ef85bd59e25120)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif