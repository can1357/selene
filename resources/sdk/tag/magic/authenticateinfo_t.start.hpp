#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagAUTHENTICATEINFO.dwFlags", dw_flags, 0x0, 0x20, true, 0xca8389db64ce6315)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagAUTHENTICATEINFO.dwReserved", dw_reserved, 0x20, 0x20, true, 0x4e4d8727fe4827d)
#else
#define _m00
#define _m01
#endif