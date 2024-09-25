#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DISASSOCIATE.ProcessId", process_id, 0x0, 0x20, true, 0x63ada2ff43413951)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DISASSOCIATE.ScheduledThreadId", scheduled_thread_id, 0x20, 0x20, true, 0xa34efa9b69286ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DISASSOCIATE.PrimaryThreadId", primary_thread_id, 0x40, 0x20, true, 0x4c3fc7b3fc2160b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_DISASSOCIATE.UmsApcControlFlags", ums_apc_control_flags, 0x60, 0x20, true, 0x9f25274778284608)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_UMS_EVENT_DISASSOCIATE.Status", status, 0x80, 0x20, true, 0x5e6dd8bd671dc7fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif