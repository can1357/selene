#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.ContextSwitches", context_switches, 0x0, 0x20, true, 0xde316feb4e5d9950)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.DpcCount", dpc_count, 0x20, 0x20, true, 0x13f27cf8c7054d25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.DpcRate", dpc_rate, 0x40, 0x20, true, 0xc5a5266caaea2ece)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.TimeIncrement", time_increment, 0x60, 0x20, true, 0x2fe23a88bf898a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.DpcBypassCount", dpc_bypass_count, 0x80, 0x20, true, 0x2250d4478dd74e1f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INTERRUPT_INFORMATION.ApcBypassCount", apc_bypass_count, 0xa0, 0x20, true, 0xe95a10786fe82d62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif