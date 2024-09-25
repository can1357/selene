#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.BeginAddress", begin_address, 0x0, 0x40, true, 0x775d9a6c07a9c47f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.EndAddress", end_address, 0x40, 0x40, true, 0xdfb4199331ea09fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.ExceptionHandler", exception_handler, 0x80, 0x40, true, 0x7fe4594c31b0f1e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.HandlerData", handler_data, 0xc0, 0x40, true, 0xd2d9521045a82545)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.PrologEndAddress", prolog_end_address, 0x100, 0x40, true, 0x77be220f763e4f3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif