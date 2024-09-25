#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cptableinfo_t), "_NLSTABLEINFO.OemTableInfo", oem_table_info, 0x0, 0x0, true, 0x38c118d3f375d27c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cptableinfo_t), "_NLSTABLEINFO.AnsiTableInfo", ansi_table_info, 0x200, 0x0, true, 0x29746da4a541b33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NLSTABLEINFO.UpperCaseTable", upper_case_table, 0x400, 0x40, true, 0x3342c7ae161a3ab9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NLSTABLEINFO.LowerCaseTable", lower_case_table, 0x440, 0x40, true, 0x16ffe65b8f7e5f16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif