#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::thread_ums_information_command_t), "_THREAD_UMS_INFORMATION.Command", command, 0x0, 0x20, true, 0x3433bfeea03d4717)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_completion_list_t*), "_THREAD_UMS_INFORMATION.CompletionList", completion_list, 0x40, 0x40, true, 0x18529ea6204fc4da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_context_t*), "_THREAD_UMS_INFORMATION.UmsContext", ums_context, 0x80, 0x40, true, 0xaf2b9ea2f3e2f5b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_UMS_INFORMATION.Flags", flags, 0x40, 0x20, true, 0x75577701be0e50d1)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_THREAD_UMS_INFORMATION.IsUmsSchedulerThread", is_ums_scheduler_thread, 0x40, 0x1, true, 0xabe77e8bb0d2ba67, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_THREAD_UMS_INFORMATION.IsUmsWorkerThread", is_ums_worker_thread, 0x41, 0x1, true, 0x7cc11215250b3838, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif