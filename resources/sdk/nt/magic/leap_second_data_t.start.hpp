#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LEAP_SECOND_DATA.Enabled", enabled, 0x0, 0x8, true, 0xf9cdf789ccfc1f6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LEAP_SECOND_DATA.Count", count, 0x20, 0x20, true, 0xf7eaabc5d2949ea4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_LEAP_SECOND_DATA.Data", data, 0x40, 0x40, true, 0x20ad190a9272bf45)
#else
#define _m00
#define _m01
#define _m02
#endif