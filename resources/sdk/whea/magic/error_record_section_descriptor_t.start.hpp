#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.SectionOffset", section_offset, 0x0, 0x20, true, 0x79c09d8fc6b2dbc8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.SectionLength", section_length, 0x20, 0x20, true, 0xeece4361380f97e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::revision_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.Revision", revision, 0x40, 0x10, true, 0x6cc4bc982bb50e35)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_record_section_descriptor_validbits_t ), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.ValidBits", valid_bits, 0x50, 0x8, true, 0xfc7912645b2f3ec6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(whea_error_record_section_descriptor_flags_t ), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.Flags", flags, 0x60, 0x20, true, 0x572b718cf75f2595)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.SectionType", section_type, 0x80, 0x80, true, 0x18b47a9e202a020e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.FRUId", fru_id, 0x100, 0x80, true, 0xe8dbbafd38898dfc)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.SectionSeverity", section_severity, 0x180, 0x20, true, 0x75b5452e44f8d96e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 20>), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.FRUText", fru_text, 0x1a0, 0xa0, true, 0xce2c0f729bd83729)
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