#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::processor_generic_error_section_validbits_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0x5c9bdbc1e0e77689)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.ProcessorType", processor_type, 0x40, 0x8, true, 0xdb5ce6638a5ad01d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.InstructionSet", instruction_set, 0x48, 0x8, true, 0x5f5ae99652e2dc85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.ErrorType", error_type, 0x50, 0x8, true, 0xe7a85a1d120b4d7d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.Operation", operation, 0x58, 0x8, true, 0x48eddcb2bb7a9087)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.Flags", flags, 0x60, 0x8, true, 0x10a370e5c33b9143)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.Level", level, 0x68, 0x8, true, 0x90a7d6e37dc60eed)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.CPUVersion", cpu_version, 0x80, 0x40, true, 0x39d4846f2c5541c8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.CPUBrandString", cpu_brand_string, 0xc0, 0x0, true, 0x74c113aa465b5c1c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.ProcessorId", processor_id, 0x4c0, 0x40, true, 0x3374ac6961195a64)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.TargetAddress", target_address, 0x500, 0x40, true, 0x7f30f4465cbe97d8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.RequesterId", requester_id, 0x540, 0x40, true, 0xe9af6262ded1410f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.ResponderId", responder_id, 0x580, 0x40, true, 0xd0cbc7068c5d2d3f)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.InstructionPointer", instruction_pointer, 0x5c0, 0x40, true, 0x2a0e14180d159e58)
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
#endif