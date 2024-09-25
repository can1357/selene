#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_IO_SIZE_BUCKET.IoSuccess", io_success, 0x0, 0x0, false, 0xd1e3bb3b81f9af2e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_IO_SIZE_BUCKET.IoLatency", io_latency, 0x0, 0x0, false, 0xe5b013b7eaa642df)
#else
#define _m00
#define _m01
#endif