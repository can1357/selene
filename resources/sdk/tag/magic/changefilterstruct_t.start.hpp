#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCHANGEFILTERSTRUCT.cbSize", cb_size, 0x0, 0x20, true, 0xb22edd32981d4433)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCHANGEFILTERSTRUCT.ExtStatus", ext_status, 0x20, 0x20, true, 0x420b4955343b8a6b)
#else
#define _m00
#define _m01
#endif