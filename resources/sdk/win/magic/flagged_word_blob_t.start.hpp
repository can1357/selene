#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLAGGED_WORD_BLOB.fFlags", f_flags, 0x0, 0x20, true, 0x14770afc9eac927d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLAGGED_WORD_BLOB.clSize", cl_size, 0x20, 0x20, true, 0x775ba62176a044ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_FLAGGED_WORD_BLOB.asData", as_data, 0x40, 0x10, true, 0xa10c84eec335d32b)
#else
#define _m00
#define _m01
#define _m02
#endif