#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_END.ProcessId", process_id, 0x0, 0x20, true, 0xec9aa03fffc7b111)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_END.ScheduledThreadId", scheduled_thread_id, 0x20, 0x20, true, 0x1851be47de6ca1be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_END.PrimaryThreadId", primary_thread_id, 0x40, 0x20, true, 0x2197150f68f0e5ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DIRECTED_SWITCH_END.SwitchFlags", switch_flags, 0x60, 0x20, true, 0x7f69fb22ed49d941)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif