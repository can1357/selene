#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.Version", version, 0x0, 0x20, true, 0x6d1f9254fdbb7d7c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::disk_performance_type_t), "_DISK_PERFORMANCE_INFO.Type", type, 0x20, 0x20, true, 0xa8ccd59fd88ced18)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.QueryTime", query_time, 0x40, 0x40, true, 0xf80a3aea23f44acd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.BytesRead", bytes_read, 0x80, 0x40, true, 0xe46a7b33895487bb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.BytesWritten", bytes_written, 0xc0, 0x40, true, 0x54a88d34f172499c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.ReadTime", read_time, 0x100, 0x40, true, 0x68da6deedb6a4156)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.WriteTime", write_time, 0x140, 0x40, true, 0xe0ecf0d06013530e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.FlushTime", flush_time, 0x180, 0x40, true, 0xdfe8255dcd4545c0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_PERFORMANCE_INFO.IdleTime", idle_time, 0x1c0, 0x40, true, 0x84409007145b2120)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.ReadCount", read_count, 0x200, 0x20, true, 0xb5501fb9ea9c6207)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.WriteCount", write_count, 0x220, 0x20, true, 0x355997192d98fdfa)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.FlushCount", flush_count, 0x240, 0x20, true, 0x12d1d975bda5362f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.QueueDepth", queue_depth, 0x260, 0x20, true, 0x408cb05ad7502cb7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_INFO.SplitCount", split_count, 0x280, 0x20, true, 0xb386706955e68e10)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif