#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.LocalAPICId", local_apic_id, 0x0, 0x1, true, 0xe21a061b92101ab0, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.CpuId", cpu_id, 0x1, 0x1, true, 0xea293b83713ffccb, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.ProcInfoCount", proc_info_count, 0x2, 0x6, true, 0xf0aa9a5f8ce16d09, 6, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.ContextInfoCount", context_info_count, 0x8, 0x6, true, 0x8389cb0946454cfc, 6, uint64_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0xdf20e9f810696ce8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif