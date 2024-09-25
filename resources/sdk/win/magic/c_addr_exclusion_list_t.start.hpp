#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CAddrExclusionList._lRefs", l_refs, 0x40, 0x20, true, 0x905e00730e0d4f55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAddrExclusionList._dwCursor", dw_cursor, 0x60, 0x20, true, 0x4198a04165460afa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CAddrExclusionList._dwNumStrings", dw_num_strings, 0x80, 0x20, true, 0xebf1d6629fd16d5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "CAddrExclusionList._ppszStrings", ppsz_strings, 0xc0, 0x40, true, 0x5f38de2116bbb9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif