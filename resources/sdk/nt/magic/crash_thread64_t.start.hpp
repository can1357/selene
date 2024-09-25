#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD64.ThreadId", thread_id, 0x0, 0x20, true, 0xfd9c5bca944a74e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD64.SuspendCount", suspend_count, 0x20, 0x20, true, 0xe9d7396a1394f2f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD64.PriorityClass", priority_class, 0x40, 0x20, true, 0xba17b2d79ca887f8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD64.Priority", priority, 0x60, 0x20, true, 0x1f4d5575afab0254)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRASH_THREAD64.Teb", teb, 0x80, 0x40, true, 0x538fb23c5ae8899a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif