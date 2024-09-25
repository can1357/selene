#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.Header", header, 0x0, 0x0, true, 0xad5f95b95e7502fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.ScheduledThreadId", scheduled_thread_id, 0x100, 0x20, true, 0x736c4130cadf126a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.SwitchCount", switch_count, 0x120, 0x20, true, 0x72d26c51aad932c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.KernelYieldCount", kernel_yield_count, 0x140, 0x20, true, 0x23ad42ab4db4627e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.MixedYieldCount", mixed_yield_count, 0x160, 0x20, true, 0x62f8634ac7fca5c6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_UMS_EVENT_CONTEXT_SWITCH.YieldCount", yield_count, 0x180, 0x20, true, 0x4d20de139092151c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif