#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_POP_SHUTDOWN_BUG_CHECK.InitiatingThread", initiating_thread, 0x0, 0x40, true, 0x51bb468fbe857783)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_POP_SHUTDOWN_BUG_CHECK.InitiatingProcess", initiating_process, 0x40, 0x40, true, 0xee0b39daedbe24c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_SHUTDOWN_BUG_CHECK.ThreadId", thread_id, 0x80, 0x40, true, 0x8a472137766544a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_SHUTDOWN_BUG_CHECK.ProcessId", process_id, 0xc0, 0x40, true, 0x8c804d7da0e915da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_SHUTDOWN_BUG_CHECK.Code", code, 0x100, 0x20, true, 0x3f568e32c82fd461)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_SHUTDOWN_BUG_CHECK.Parameter1", parameter1, 0x140, 0x40, true, 0xd354d8a03dfd370d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_SHUTDOWN_BUG_CHECK.Parameter2", parameter2, 0x180, 0x40, true, 0x84627c6c8a317c0c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_SHUTDOWN_BUG_CHECK.Parameter3", parameter3, 0x1c0, 0x40, true, 0xa09bd0d0d89bc377)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_SHUTDOWN_BUG_CHECK.Parameter4", parameter4, 0x200, 0x40, true, 0x3808132ad4ec9cb1)
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
#endif