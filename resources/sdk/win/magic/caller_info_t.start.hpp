#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CallerInfo.ReturnAddress", return_address, 0x0, 0x40, true, 0xc4b0122ab7e769b)
#else
#define _m00
#endif