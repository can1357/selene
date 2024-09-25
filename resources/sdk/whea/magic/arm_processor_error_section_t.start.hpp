#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::arm_processor_error_section_valid_bits_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x20, true, 0xa5049f78acb7d422)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.ErrorInformationStructures", error_information_structures, 0x20, 0x10, true, 0x39b3a0d7440b35bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.ContextInformationStructures", context_information_structures, 0x30, 0x10, true, 0x63a037759aa39485)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.SectionLength", section_length, 0x40, 0x20, true, 0xd84fdedece750447)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.ErrorAffinityLevel", error_affinity_level, 0x60, 0x8, true, 0x76dbadc7fad285ac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.MPIDR_EL1", mpidr_el1, 0x80, 0x40, true, 0xfc4820c2450c8c16)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.MIDR_EL1", midr_el1, 0xc0, 0x40, true, 0x2bcd80eb69f4e411)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.RunningState", running_state, 0x100, 0x20, true, 0xa297772ed8ab2bc2)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.PSCIState", psci_state, 0x120, 0x20, true, 0x951fbbb5bbd4a6fb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_ARM_PROCESSOR_ERROR_SECTION.Data", data, 0x140, 0x8, true, 0xe62330c8a2568149)
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
#endif