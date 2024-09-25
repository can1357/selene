#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BATTERY_REPORTING_SCALE.Granularity", granularity, 0x0, 0x20, true, 0xb871668b341a63ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BATTERY_REPORTING_SCALE.Capacity", capacity, 0x20, 0x20, true, 0x792e0b1f24af3e7c)
#else
#define _m00
#define _m01
#endif