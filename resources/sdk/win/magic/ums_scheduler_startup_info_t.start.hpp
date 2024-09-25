#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_UMS_SCHEDULER_STARTUP_INFO.UmsVersion", ums_version, 0x0, 0x20, true, 0xd4288764ba134e7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_SCHEDULER_STARTUP_INFO.CompletionList", completion_list, 0x40, 0x40, true, 0x89591144f3f1dc7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum rtl::ums_scheduler_reason_t, uint64_t, void*)>*), "_UMS_SCHEDULER_STARTUP_INFO.SchedulerProc", scheduler_proc, 0x80, 0x40, true, 0x7b9a55587ed704c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_UMS_SCHEDULER_STARTUP_INFO.SchedulerParam", scheduler_param, 0xc0, 0x40, true, 0x366943d329331c55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif