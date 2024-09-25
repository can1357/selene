#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_START.ProcessId", process_id, 0x0, 0x20, true, 0xe5366c33b92d8792)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_START.ScheduledThreadId", scheduled_thread_id, 0x20, 0x20, true, 0x89f57e769fa9cf30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_START.PrimaryThreadId", primary_thread_id, 0x40, 0x20, true, 0xb7c68ed75bc0fa45)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_START.SwitchFlags", switch_flags, 0x60, 0x20, true, 0x4f1516d1acfe5f64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif