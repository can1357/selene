#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_INPUT.Version", version, 0x0, 0x20, true, 0x9e743db4f786140e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_INPUT.Size", size, 0x20, 0x20, true, 0xb0bdf71b6747d7ce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_INPUT.Flags", flags, 0x40, 0x20, true, 0x7254028dcd984d95)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_TIERING_QUERY_INPUT.NumberOfTierIds", number_of_tier_ids, 0x60, 0x20, true, 0x70d715f877d9d3ea)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_DEVICE_DSM_TIERING_QUERY_INPUT.TierIds", tier_ids, 0x80, 0x80, true, 0x1496490f6d35ca9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif