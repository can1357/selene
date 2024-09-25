#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.lpInformation", lp_information, 0x0, 0x40, true, 0xa630888d6835c8ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.lpSectionBase", lp_section_base, 0x40, 0x40, true, 0x6c3514b8eccdcc8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.ulSectionLength", ul_section_length, 0x80, 0x20, true, 0x428b5688cdb53698)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.lpSectionGlobalDataBase", lp_section_global_data_base, 0xc0, 0x40, true, 0xa8737e4820b93289)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA.ulSectionGlobalDataLength", ul_section_global_data_length, 0x100, 0x20, true, 0x5ae7eddc9faaf2cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif