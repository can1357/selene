#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.SectionType", section_type, 0x0, 0x80, true, 0x6840aa0a1c4e9139)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.ErrorSeverity", error_severity, 0x80, 0x20, true, 0xde5b80059d01f411)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::revision_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.Revision", revision, 0xa0, 0x10, true, 0xee95a566f4c79c8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.ValidBits", valid_bits, 0xb0, 0x8, true, 0x37f3f6c3d755aafd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.Flags", flags, 0xb8, 0x8, true, 0xebacb4737fb71a2d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.ErrorDataLength", error_data_length, 0xc0, 0x20, true, 0x194583e9ffc196df)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.FRUId", fru_id, 0xe0, 0x80, true, 0xdd152f43f12c3f7f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.FRUText", fru_text, 0x160, 0xa0, true, 0x3c94fe2b4d071249)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::timestamp_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.Timestamp", timestamp, 0x200, 0x40, true, 0x473297774dcc63e5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V2.Data", data, 0x240, 0x8, true, 0x675c34b12104b5f8)
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