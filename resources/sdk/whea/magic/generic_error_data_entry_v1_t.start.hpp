#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.SectionType", section_type, 0x0, 0x80, true, 0xdbe706e859985c9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.ErrorSeverity", error_severity, 0x80, 0x20, true, 0xfa3ef87b4e949025)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::revision_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.Revision", revision, 0xa0, 0x10, true, 0x692e1020b273ce7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.ValidBits", valid_bits, 0xb0, 0x8, true, 0x3eb4a7fb39ffbf0f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.Flags", flags, 0xb8, 0x8, true, 0xa4d653e2a4e60f91)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.ErrorDataLength", error_data_length, 0xc0, 0x20, true, 0x1df16c470443296d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.FRUId", fru_id, 0xe0, 0x80, true, 0x306ad6019deb4162)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.FRUText", fru_text, 0x160, 0xa0, true, 0x20ef432a8770dd9e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.Data", data, 0x200, 0x8, true, 0xe9e65854c9a71a06)
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
#endif