#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.Size", size, 0x0, 0x20, true, 0x5813808181f64c6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.DataFormatVersion", data_format_version, 0x20, 0x20, true, 0x13abc7364984bcfc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.Data", data, 0x40, 0x40, true, 0x6574a89250638a23)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.Length", length, 0x80, 0x20, true, 0x2c043c6064c895e7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.SectionGlobalData", section_global_data, 0xc0, 0x40, true, 0x2b0005045b57d2fa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.SectionGlobalDataLength", section_global_data_length, 0x100, 0x20, true, 0x62ef750d917c9024)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.SectionBase", section_base, 0x140, 0x40, true, 0x73cfe72cc1a49249)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.SectionTotalLength", section_total_length, 0x180, 0x20, true, 0x3feba7883a47153c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.ActivationContext", activation_context, 0x1c0, 0x40, true, 0x2000674ddc98ef99)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.AssemblyRosterIndex", assembly_roster_index, 0x200, 0x20, true, 0x41975ccd4af45166)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.Flags", flags, 0x220, 0x20, true, 0xeb81d22d47d3f829)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(activation_context_section_keyed_data_assembly_metadata_t ), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA.AssemblyMetadata", assembly_metadata, 0x240, 0x40, true, 0x8ac7a9176c11b52e)
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
#define _m10
#define _m11
#endif