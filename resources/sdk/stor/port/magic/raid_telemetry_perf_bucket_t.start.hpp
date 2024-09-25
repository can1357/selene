#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_PERF_BUCKET.IoSuccess", io_success, 0x0, 0x40, true, 0xfae57c93a7ef9e58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_PERF_BUCKET.IoFailed", io_failed, 0x40, 0x40, true, 0x78a747fb7a90767f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_PERF_BUCKET.IoLatency", io_latency, 0x80, 0x40, true, 0x1f0586c9bea09a4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_TELEMETRY_PERF_BUCKET.IoCount", io_count, 0x0, 0x0, false, 0xc67fbba13d525cf0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif