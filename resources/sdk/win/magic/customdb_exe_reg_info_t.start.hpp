#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_EXE_REG_INFO.dwSizeCb", dw_size_cb, 0x0, 0x20, true, 0x260c798ab08981d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CUSTOMDB_EXE_REG_INFO.pwszName", pwsz_name, 0x40, 0x40, true, 0x30daf910e461918a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CUSTOMDB_EXE_REG_INFO.bLayer", b_layer, 0x80, 0x20, true, 0x66ca865046a18e4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CUSTOMDB_EXE_REG_INFO.dwDbEntryCount", dw_db_entry_count, 0xa0, 0x20, true, 0xfa7b862a3000fad1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif