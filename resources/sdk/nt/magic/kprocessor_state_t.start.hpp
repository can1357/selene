#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kspecial_registers_t), "_KPROCESSOR_STATE.SpecialRegisters", special_registers, 0x0, 0x80, true, 0xafee7d778d7df631)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_KPROCESSOR_STATE.ContextFrame", context_frame, 0x780, 0x80, true, 0x57a85a7c2b90de80)
#else
#define _m00
#define _m01
#endif