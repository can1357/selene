#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_TELEMETRY_NODE_COUNTERS.MaxReadWriteLatency", max_read_write_latency, 0x0, 0x40, true, 0x952d0d77d2b9ebe5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_TELEMETRY_NODE_COUNTERS.TotalReadBytes", total_read_bytes, 0x40, 0x40, true, 0x64470010fc90f3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_TELEMETRY_NODE_COUNTERS.TotalWriteBytes", total_write_bytes, 0x80, 0x40, true, 0x671a7da0142fccc6)
#else
#define _m00
#define _m01
#define _m02
#endif