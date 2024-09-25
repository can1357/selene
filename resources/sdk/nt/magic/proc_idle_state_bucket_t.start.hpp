#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_BUCKET.TotalTime", total_time, 0x0, 0x40, true, 0xc0bc762048fecec6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_BUCKET.MinTime", min_time, 0x40, 0x40, true, 0x5c007564caa7b65b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_STATE_BUCKET.MaxTime", max_time, 0x80, 0x40, true, 0x898265695a014ffa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROC_IDLE_STATE_BUCKET.Count", count, 0xc0, 0x20, true, 0x5b2458ed27bc490)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif