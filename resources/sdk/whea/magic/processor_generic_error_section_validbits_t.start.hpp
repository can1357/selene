#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.ProcessorType", processor_type, 0x0, 0x1, true, 0x1fe39f6d21fce978, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.InstructionSet", instruction_set, 0x1, 0x1, true, 0xa86c59efe809e214, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.ErrorType", error_type, 0x2, 0x1, true, 0x540dbfe8c0791ac5, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.Operation", operation, 0x3, 0x1, true, 0xe4d3f95929ade196, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.Flags", flags, 0x4, 0x1, true, 0xf8703aa6d359ec17, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.Level", level, 0x5, 0x1, true, 0x3a259fd91166b2cb, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.CPUVersion", cpu_version, 0x6, 0x1, true, 0x95cf1b16aebd0124, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.CPUBrandString", cpu_brand_string, 0x7, 0x1, true, 0x4b341d71b5cbde33, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.ProcessorId", processor_id, 0x8, 0x1, true, 0x2844b637816b8af6, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.TargetAddress", target_address, 0x9, 0x1, true, 0x431e14880f0c994b, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.RequesterId", requester_id, 0xa, 0x1, true, 0x18beab191992c504, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.ResponderId", responder_id, 0xb, 0x1, true, 0xe01f3295887baac, 1, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.InstructionPointer", instruction_pointer, 0xc, 0x1, true, 0x9bcbcb4e4f0b954f, 1, uint64_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0xd0ec06d577e4f784)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS.NativeModelId", native_model_id, 0xd, 0x1, true, 0x2b31428a14ae5de6, 1, uint64_t)
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
#define _m12
#define _m13
#define _m14
#endif