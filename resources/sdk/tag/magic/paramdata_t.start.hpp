#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagPARAMDATA.szName", sz_name, 0x0, 0x40, true, 0xf6d7a31e2c49f6d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPARAMDATA.vt", vt, 0x40, 0x10, true, 0xbf3e9e668df01119)
#else
#define _m00
#define _m01
#endif