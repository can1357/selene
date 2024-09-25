#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_SYSTEM_THREAD_INFORMATION.UmsVersion", ums_version, 0x0, 0x20, true, 0x7faa4aeb73a8cebd)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UMS_SYSTEM_THREAD_INFORMATION.IsUmsSchedulerThread", is_ums_scheduler_thread, 0x20, 0x1, true, 0x7a6211637a415f1c, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UMS_SYSTEM_THREAD_INFORMATION.IsUmsWorkerThread", is_ums_worker_thread, 0x21, 0x1, true, 0x945090a43daeec93, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_SYSTEM_THREAD_INFORMATION.ThreadUmsFlags", thread_ums_flags, 0x20, 0x20, true, 0xa502c79c7db549f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif