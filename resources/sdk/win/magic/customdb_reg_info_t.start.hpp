#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_REG_INFO.dwSizeCb", dw_size_cb, 0x0, 0x20, true, 0xdd69dd8ab8fe2014)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CUSTOMDB_REG_INFO.pwszRegKeyPath", pwsz_reg_key_path, 0x40, 0x40, true, 0xcc826d7bacb29d4c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CUSTOMDB_REG_INFO.guidDBFromKeyName", guid_db_from_key_name, 0x80, 0x80, true, 0xcad11ae5444e9d3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CUSTOMDB_REG_INFO.pwszRegValDbPath", pwsz_reg_val_db_path, 0x100, 0x40, true, 0x45d6f26434332c76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CUSTOMDB_REG_INFO.ullRegValDbInstallTimeStamp", ull_reg_val_db_install_time_stamp, 0x140, 0x40, true, 0x6ebe0ecb9d515f76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CUSTOMDB_REG_INFO.pwszRegValDbDescription", pwsz_reg_val_db_description, 0x180, 0x40, true, 0x9b5f4eeb17ac18eb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_REG_INFO.dwRegValDbType", dw_reg_val_db_type, 0x1c0, 0x20, true, 0x94a2cc094cd8bf66)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_REG_INFO.dwRegInfoValidationFlags", dw_reg_info_validation_flags, 0x1e0, 0x20, true, 0xfa298cd043b5e0ae)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_REG_INFO.dwRegFileCompareFlags", dw_reg_file_compare_flags, 0x200, 0x20, true, 0xbdb3c0e65d18a261)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_REG_INFO.dwRegValDbRuntimePlatform", dw_reg_val_db_runtime_platform, 0x220, 0x20, true, 0xc48ca46bde195e59)
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
#endif