#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x2d35dbeb3aade0d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xd0ed5cc5a70086f5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.Flags", flags, 0x40, 0x20, true, 0xcaf7203a76128de1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.TotalNumberOfTiers", total_number_of_tiers, 0x60, 0x20, true, 0x9098e7b79f4fa371)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.NumberOfTiersReturned", number_of_tiers_returned, 0x80, 0x20, true, 0xa91eba4a12f3fd2b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_tier_t, 1>), "_STORAGE_DEVICE_TIERING_DESCRIPTOR.Tiers", tiers, 0xc0, 0x40, true, 0x5d75097d7d3fc1a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif