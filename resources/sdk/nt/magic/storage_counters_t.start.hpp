#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_COUNTERS.Version", version, 0x0, 0x20, true, 0x71497d200406fb71)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_COUNTERS.Size", size, 0x20, 0x20, true, 0xca0d17a50120fb97)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_COUNTERS.NumberOfCounters", number_of_counters, 0x40, 0x20, true, 0xe5315292db0b2657)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_counter_t, 1>), "_STORAGE_COUNTERS.Counters", counters, 0x80, 0x80, true, 0xead632d11d296bae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif