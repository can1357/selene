#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PORT_DATA_ENTRY.Base", base, 0x0, 0x40, true, 0xbf9bea735be129f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_DATA_ENTRY.Size", size, 0x40, 0x20, true, 0xf5a75df214535f07)
#else
#define _m00
#define _m01
#endif