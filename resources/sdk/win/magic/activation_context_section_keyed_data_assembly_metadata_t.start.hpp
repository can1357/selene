#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::activation_context_data_assembly_information_t*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.Information", information, 0x0, 0x40, true, 0xefe6e9fc262e1c75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.SectionBase", section_base, 0x40, 0x40, true, 0x617aceed7bb5225d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.SectionLength", section_length, 0x80, 0x20, true, 0xb0b4aeb1ce97d463)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.SectionGlobalDataBase", section_global_data_base, 0xc0, 0x40, true, 0xc55b06546c85911a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA.SectionGlobalDataLength", section_global_data_length, 0x100, 0x20, true, 0x9d0fd0dd8aa9eb34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif