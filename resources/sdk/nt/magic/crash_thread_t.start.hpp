#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD.ThreadId", thread_id, 0x0, 0x20, true, 0xbeff7ce20b8a06b3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD.SuspendCount", suspend_count, 0x20, 0x20, true, 0xe5f0fc3215f914e3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD.PriorityClass", priority_class, 0x40, 0x20, true, 0xc139563f1aed239f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD.Priority", priority, 0x60, 0x20, true, 0xa38d372ec17445e1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRASH_THREAD.Teb", teb, 0x80, 0x40, true, 0xca24b3d57ed4cf08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif