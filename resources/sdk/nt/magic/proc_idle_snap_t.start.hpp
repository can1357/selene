#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_SNAP.Time", time, 0x0, 0x40, true, 0x225c1ff4e6b334e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROC_IDLE_SNAP.Idle", idle, 0x40, 0x40, true, 0x60c8c03138987c90)
#else
#define _m00
#define _m01
#endif