#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCINFO_VALIDBITS.CheckInfo", check_info, 0x0, 0x1, true, 0xb335429e233fc26e, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCINFO_VALIDBITS.TargetId", target_id, 0x1, 0x1, true, 0xd3619d67ecb5c498, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCINFO_VALIDBITS.RequesterId", requester_id, 0x2, 0x1, true, 0x17138feffc13d6d7, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCINFO_VALIDBITS.ResponderId", responder_id, 0x3, 0x1, true, 0x57bc36174f9a767, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCINFO_VALIDBITS.InstructionPointer", instruction_pointer, 0x4, 0x1, true, 0x6b02043a32f4b4e0, 1, uint64_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCINFO_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0xae3c3c047187a51a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif