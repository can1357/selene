#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_INPUT.Version", version, 0x0, 0x20, true, 0x1e2d75e16dfe378d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_INPUT.Size", size, 0x20, 0x20, true, 0x46e0fe29e673b237)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_INPUT.Flags", flags, 0x40, 0x20, true, 0xa46214d497bcd60a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_REGION_INFO_INPUT.NumberOfTierIds", number_of_tier_ids, 0x60, 0x20, true, 0x74c6a54ec25b08bf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_FSCTL_QUERY_REGION_INFO_INPUT.TierIds", tier_ids, 0x80, 0x80, true, 0x1105df0c580b5145)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif