#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCOPYDATASTRUCT.dwData", dw_data, 0x0, 0x40, true, 0xf6f674b7ce881ccc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCOPYDATASTRUCT.cbData", cb_data, 0x40, 0x20, true, 0x83def57b394c9b9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagCOPYDATASTRUCT.lpData", lp_data, 0x80, 0x40, true, 0x5e4d81190bdb809f)
#else
#define _m00
#define _m01
#define _m02
#endif