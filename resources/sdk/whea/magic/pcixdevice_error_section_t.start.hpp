#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pcixdevice_error_section_validbits_t), "_WHEA_PCIXDEVICE_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0x73a22eab42183c2b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_status_t), "_WHEA_PCIXDEVICE_ERROR_SECTION.ErrorStatus", error_status, 0x40, 0x40, true, 0x5f148e20138d26c7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pcixdevice_id_t), "_WHEA_PCIXDEVICE_ERROR_SECTION.IdInfo", id_info, 0x80, 0x80, true, 0x7573999e5f5f48c7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIXDEVICE_ERROR_SECTION.MemoryNumber", memory_number, 0x100, 0x20, true, 0xe80bea375203e723)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIXDEVICE_ERROR_SECTION.IoNumber", io_number, 0x120, 0x20, true, 0x690d5740b10f27fd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::pcixdevice_register_pair_t, 1>), "_WHEA_PCIXDEVICE_ERROR_SECTION.RegisterDataPairs", register_data_pairs, 0x140, 0x80, true, 0xe51ee2df981136d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif