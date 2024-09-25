#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_IPT_SUPPORT.IptHandle", ipt_handle, 0x0, 0x40, true, 0x2bf24388936868fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_IPT_SUPPORT.IptOption", ipt_option, 0x40, 0x40, true, 0xe1ad741322216be9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::hw_trace_ext_interface_t*), "_ETW_IPT_SUPPORT.EtwHwTraceExtInterface", etw_hw_trace_ext_interface, 0x80, 0x40, true, 0xe3bd66b50aa72c33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_ETW_IPT_SUPPORT.HookIdCount", hook_id_count, 0xc0, 0x20, true, 0xced01ceb807eb208)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_ETW_IPT_SUPPORT.HookId", hook_id, 0xe0, 0x40, true, 0xad62c7c79c31dc9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif