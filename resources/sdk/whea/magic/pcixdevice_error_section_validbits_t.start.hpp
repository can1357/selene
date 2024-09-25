#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.ErrorStatus", error_status, 0x0, 0x1, true, 0x842d144d2a0b18b8, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.IdInfo", id_info, 0x1, 0x1, true, 0x68b71c26aed085cc, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.MemoryNumber", memory_number, 0x2, 0x1, true, 0x2f708b1c58dec227, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.IoNumber", io_number, 0x3, 0x1, true, 0x55bc9a1865493846, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.RegisterDataPairs", register_data_pairs, 0x4, 0x1, true, 0xc9a4fee713862563, 1, uint64_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXDEVICE_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0x327a18cded90b536)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif