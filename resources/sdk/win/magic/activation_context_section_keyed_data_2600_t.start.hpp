#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.Size", size, 0x0, 0x20, true, 0xed7aee46cb9212f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.DataFormatVersion", data_format_version, 0x20, 0x20, true, 0x90014f18f1f3afe7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.Data", data, 0x40, 0x40, true, 0xede073de9dd40064)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.Length", length, 0x80, 0x20, true, 0xc62069209f349022)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.SectionGlobalData", section_global_data, 0xc0, 0x40, true, 0x4088048f99bd5032)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.SectionGlobalDataLength", section_global_data_length, 0x100, 0x20, true, 0x9a1424ee82720ba4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.SectionBase", section_base, 0x140, 0x40, true, 0x8e6ae50f2d55262f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.SectionTotalLength", section_total_length, 0x180, 0x20, true, 0xe115aa96498913af)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::activation_context_t*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.ActivationContext", activation_context, 0x1c0, 0x40, true, 0xe7378a2afb90a8c7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.AssemblyRosterIndex", assembly_roster_index, 0x200, 0x20, true, 0x1e67dfcce8d04d27)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600.Flags", flags, 0x220, 0x20, true, 0x56ac3b25c537f9c)
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
#endif