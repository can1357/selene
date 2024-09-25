#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OVERLAPPED.Internal", internal, 0x0, 0x40, true, 0x41a113299f661007)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OVERLAPPED.InternalHigh", internal_high, 0x40, 0x40, true, 0x3e0ddbdb266a95d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OVERLAPPED.Offset", offset, 0x80, 0x20, true, 0x695c5e82d54219ea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OVERLAPPED.OffsetHigh", offset_high, 0xa0, 0x20, true, 0x14914799df794f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OVERLAPPED.Pointer", pointer, 0x80, 0x40, true, 0xe689a3122118de0e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OVERLAPPED.hEvent", h_event, 0xc0, 0x40, true, 0x395be8437d73222a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif