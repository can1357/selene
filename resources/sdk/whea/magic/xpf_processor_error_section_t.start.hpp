#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::xpf_processor_error_section_validbits_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0xb81d2dcf01065f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION.LocalAPICId", local_apic_id, 0x40, 0x40, true, 0x94fcfeed76b71f37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 48>), "_WHEA_XPF_PROCESSOR_ERROR_SECTION.CpuId", cpu_id, 0x80, 0x80, true, 0xcf5b3ac7c4505633)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_XPF_PROCESSOR_ERROR_SECTION.VariableInfo", variable_info, 0x200, 0x8, true, 0x3c2f97a533bd5e12)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif