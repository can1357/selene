#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_record_header_t), "_WHEA_ERROR_RECORD.Header", header, 0x0, 0x0, true, 0x1636a2cd7fff5e1c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct whea::error_record_section_descriptor_t, 1>), "_WHEA_ERROR_RECORD.SectionDescriptor", section_descriptor, 0x400, 0x40, true, 0x360bbc9890ab9ef7)
#else
#define _m00
#define _m01
#endif