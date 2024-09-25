#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_SCHEDULER_STARTUP_INFO.UmsVersion", ums_version, 0x0, 0x20, true, 0x24ee0278d724461a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_completion_list_t*), "_RTL_UMS_SCHEDULER_STARTUP_INFO.CompletionList", completion_list, 0x40, 0x40, true, 0xcea9766290e36507)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(enum rtl::ums_scheduler_reason_t, uint64_t, void*)>*), "_RTL_UMS_SCHEDULER_STARTUP_INFO.SchedulerProc", scheduler_proc, 0x80, 0x40, true, 0x78a0a1d0a1b87014)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_UMS_SCHEDULER_STARTUP_INFO.SchedulerParam", scheduler_param, 0xc0, 0x40, true, 0x7ed46e8c087b9d26)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif