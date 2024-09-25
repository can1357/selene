#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD32.ThreadId", thread_id, 0x0, 0x20, true, 0x209ec4565880c2ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD32.SuspendCount", suspend_count, 0x20, 0x20, true, 0x29118db720d44f5f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD32.PriorityClass", priority_class, 0x40, 0x20, true, 0xafc5792e117867fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD32.Priority", priority, 0x60, 0x20, true, 0xa2272035ecc2c448)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASH_THREAD32.Teb", teb, 0x80, 0x20, true, 0xfc3961693123804e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif