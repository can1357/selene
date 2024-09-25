#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.ContextSwitches", context_switches, 0x0, 0x20, true, 0xa15d1d27de8faac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.FindAny", find_any, 0x20, 0x20, true, 0xd3f8b2f0f3d83eac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.FindLast", find_last, 0x40, 0x20, true, 0x4be16093eb6b4d0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.FindIdeal", find_ideal, 0x60, 0x20, true, 0x99eb958aa8154ef9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.IdleAny", idle_any, 0x80, 0x20, true, 0x5b66b6955b10f347)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.IdleCurrent", idle_current, 0xa0, 0x20, true, 0x281c993530bb6946)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.IdleLast", idle_last, 0xc0, 0x20, true, 0xe81acb4358e90b8b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.IdleIdeal", idle_ideal, 0xe0, 0x20, true, 0x82a5b466fcc5412e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.PreemptAny", preempt_any, 0x100, 0x20, true, 0x741e2f092dfc1695)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.PreemptCurrent", preempt_current, 0x120, 0x20, true, 0x6b62eed210e14557)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.PreemptLast", preempt_last, 0x140, 0x20, true, 0xc713c43befee7487)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CONTEXT_SWITCH_INFORMATION.SwitchToIdle", switch_to_idle, 0x160, 0x20, true, 0x45ea7c004710a19f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif