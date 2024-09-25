#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WHEA_NMI_ERROR_SECTION.Data", data, 0x0, 0x40, true, 0x5174082d9752e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::nmi_error_section_flags_t), "_WHEA_NMI_ERROR_SECTION.Flags", flags, 0x40, 0x20, true, 0x6ab3c5222a66cb7a)
#else
#define _m00
#define _m01
#endif