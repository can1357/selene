#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NLS_DATA_BLOCK.AnsiCodePageData", ansi_code_page_data, 0x0, 0x40, true, 0xb25cc730fc6b5736)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NLS_DATA_BLOCK.OemCodePageData", oem_code_page_data, 0x40, 0x40, true, 0x6b9014ffa84cbbde)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NLS_DATA_BLOCK.UnicodeCaseTableData", unicode_case_table_data, 0x80, 0x40, true, 0xa575edaf60ec832e)
#else
#define _m00
#define _m01
#define _m02
#endif