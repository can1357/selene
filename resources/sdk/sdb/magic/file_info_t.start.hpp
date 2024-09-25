#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_FILE_INFO.dwSizeCb", dw_size_cb, 0x0, 0x20, true, 0x3c011d6aa9add0af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SDB_FILE_INFO.pwszFilePath", pwsz_file_path, 0x40, 0x40, true, 0xe63705103e17fbd6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SDB_FILE_INFO.dwFileValidationFlags", dw_file_validation_flags, 0x80, 0x20, true, 0xd0b4f15184b7f741)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::db_header_t), "_SDB_FILE_INFO.dbHeader", db_header, 0xa0, 0x60, true, 0x607e73473be3c75b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SDB_FILE_INFO.pwszDescription", pwsz_description, 0x100, 0x40, true, 0xe48bb968f7cd95c5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SDB_FILE_INFO.guidDB", guid_db, 0x140, 0x80, true, 0x161f8c38cc6dab7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif