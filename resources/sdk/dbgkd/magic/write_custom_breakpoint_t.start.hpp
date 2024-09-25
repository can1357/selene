#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_WRITE_CUSTOM_BREAKPOINT.BreakPointAddress", break_point_address, 0x0, 0x40, true, 0x7e0d406fa8c7165a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_WRITE_CUSTOM_BREAKPOINT.BreakPointInstruction", break_point_instruction, 0x40, 0x40, true, 0xf3a4e8d2ee99f774)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_CUSTOM_BREAKPOINT.BreakPointHandle", break_point_handle, 0x80, 0x20, true, 0x866679b0481f9d94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_WRITE_CUSTOM_BREAKPOINT.BreakPointInstructionSize", break_point_instruction_size, 0xa0, 0x8, true, 0x1f2dbdda18f2dfa5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_WRITE_CUSTOM_BREAKPOINT.BreakPointInstructionAlignment", break_point_instruction_alignment, 0xa8, 0x8, true, 0xa89831a49516ce08)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif