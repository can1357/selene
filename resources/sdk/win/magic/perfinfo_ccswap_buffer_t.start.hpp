#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_CCSWAP_BUFFER.FirstTimeStamp", first_time_stamp, 0x0, 0x40, true, 0xa2f3fb7fbec63704)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_PERFINFO_CCSWAP_BUFFER.TidTable", tid_table, 0x40, 0x0, true, 0x807c91b52072d24d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int8_t, 16>), "_PERFINFO_CCSWAP_BUFFER.ThreadBasePriority", thread_base_priority, 0x240, 0x80, true, 0x45c570b74e835989)
#else
#define _m00
#define _m01
#define _m02
#endif