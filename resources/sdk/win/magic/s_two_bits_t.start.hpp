#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "STwoBits._hEvent", h_event, 0x0, 0x40, true, 0xa71a323030f4fd37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STwoBits._dwCookie", dw_cookie, 0x40, 0x20, true, 0x86fdfcbc0d9ff61c)
#else
#define _m00
#define _m01
#endif