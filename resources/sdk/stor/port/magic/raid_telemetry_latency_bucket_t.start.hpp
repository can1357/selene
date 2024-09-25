#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_LATENCY_BUCKET.IoSuccess", io_success, 0x0, 0x0, false, 0xa9f2376a8e1d8ab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_LATENCY_BUCKET.IoFailed", io_failed, 0x0, 0x0, false, 0x4f0c818e8469e097)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_LATENCY_BUCKET.IoLatency", io_latency, 0x0, 0x0, false, 0xfea0d19872f526fc)
#else
#define _m00
#define _m01
#define _m02
#endif