#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.InstructionPointer", instruction_pointer, 0x0, 0x40, true, 0xed0512663899857b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.ThreadId", thread_id, 0x40, 0x20, true, 0x26248177b125206a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.Count", count, 0x60, 0x10, true, 0x1d62fb443f6e6cef)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.ExecutingDpc", executing_dpc, 0x70, 0x1, true, 0xc63035130342433b, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.ExecutingIsr", executing_isr, 0x71, 0x1, true, 0xd1cdeb842a28f815, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.Priority", priority, 0x73, 0x5, true, 0x1782dfe580c18f55, 5, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.Flags", flags, 0x70, 0x8, true, 0x5ea7ff6ba65db1e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_SAMPLED_PROFILE_INFORMATION.Rank", rank, 0x78, 0x8, true, 0xbc2b5c869dd09351)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif