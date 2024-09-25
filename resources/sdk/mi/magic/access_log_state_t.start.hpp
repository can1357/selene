#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::page_access_info_header_t volatile*), "_MI_ACCESS_LOG_STATE.CcAccessLog", cc_access_log, 0x0, 0x40, true, 0x87751e45e5b93a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_ACCESS_LOG_STATE.DisableAccessLogging", disable_access_logging, 0x40, 0x0, true, 0xe5095cd009e970ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ACCESS_LOG_STATE.Enabled", enabled, 0x140, 0x20, true, 0xae9cefe38f4e5da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ACCESS_LOG_STATE.MinLoggingPriority", min_logging_priority, 0x160, 0x20, true, 0xba51b9c6e6c43f38)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ACCESS_LOG_STATE.AccessLoggingLock", access_logging_lock, 0x200, 0x40, true, 0x59ab1d1bdaf1f81f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif