#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "tagWPP_BINARY.Buffer", buffer, 0x0, 0x40, true, 0xefb0d7f5d2437085)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWPP_BINARY.Length", length, 0x40, 0x10, true, 0x78ad0dc1fc191f23)
#else
#define _m00
#define _m01
#endif