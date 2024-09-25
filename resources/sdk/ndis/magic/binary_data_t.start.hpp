#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "BINARY_DATA.Length", length, 0x0, 0x10, true, 0x2af447954aac80c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "BINARY_DATA.Buffer", buffer, 0x40, 0x40, true, 0x416feb0e8eaf491c)
#else
#define _m00
#define _m01
#endif