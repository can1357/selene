#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ExceptionHandlingResult.bException", b_exception, 0x0, 0x8, true, 0x8d8f4b4de6b18fb7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ExceptionHandlingResult.dwExceptionCode", dw_exception_code, 0x20, 0x20, true, 0x546303a2d8c67cad)
#else
#define _m00
#define _m01
#endif