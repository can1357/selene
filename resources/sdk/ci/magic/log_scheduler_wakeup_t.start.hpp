#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etwi::header_t), "_CI_LOG_SCHEDULER_WAKEUP.Header", header, 0x0, 0x80, true, 0x58953e2b004e4db0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CI_LOG_SCHEDULER_WAKEUP.Reason", reason, 0x180, 0x20, true, 0x53e2b9b4f440a92f)
#else
#define _m00
#define _m01
#endif