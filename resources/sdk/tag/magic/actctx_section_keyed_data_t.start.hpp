#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.cbSize", cb_size, 0x0, 0x20, true, 0x1b89fad7492820ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulDataFormatVersion", ul_data_format_version, 0x20, 0x20, true, 0xdf6cce67265829e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA.lpData", lp_data, 0x40, 0x40, true, 0x961314917e60decc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulLength", ul_length, 0x80, 0x20, true, 0xbdd244b8e697a805)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA.lpSectionGlobalData", lp_section_global_data, 0xc0, 0x40, true, 0xbd9184477dadb7d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulSectionGlobalDataLength", ul_section_global_data_length, 0x100, 0x20, true, 0xbd5d7d2317813b28)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA.lpSectionBase", lp_section_base, 0x140, 0x40, true, 0x638fc1ffc5550f75)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulSectionTotalLength", ul_section_total_length, 0x180, 0x20, true, 0x625df4bdcfbcf681)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACTCTX_SECTION_KEYED_DATA.hActCtx", h_act_ctx, 0x1c0, 0x40, true, 0x90c57939b4f5f3e9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulAssemblyRosterIndex", ul_assembly_roster_index, 0x200, 0x20, true, 0xb46d5738b7f03a8d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACTCTX_SECTION_KEYED_DATA.ulFlags", ul_flags, 0x220, 0x20, true, 0xa5c4307a4dcff10e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(actctx_section_keyed_data_assembly_metadata_t ), "tagACTCTX_SECTION_KEYED_DATA.AssemblyMetadata", assembly_metadata, 0x240, 0x40, true, 0xf8be8b60bfea7f8b)
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