#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwSize", dw_size, 0x0, 0x20, true, 0x87dc1dd4043429dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwVersion", dw_version, 0x20, 0x20, true, 0x4fd619b78c8432ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwStrLen", dw_str_len, 0x40, 0x20, true, 0x863a59605ee42379)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwStrOffset", dw_str_offset, 0x60, 0x20, true, 0x699601d1a2076fa7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwCompStrLen", dw_comp_str_len, 0x80, 0x20, true, 0x5758c1bd0744e511)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwCompStrOffset", dw_comp_str_offset, 0xa0, 0x20, true, 0x2465cc7d24d9594e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwTargetStrLen", dw_target_str_len, 0xc0, 0x20, true, 0xc2ced1dc132889b9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRECONVERTSTRING.dwTargetStrOffset", dw_target_str_offset, 0xe0, 0x20, true, 0xeee6cc1e41c69a28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif