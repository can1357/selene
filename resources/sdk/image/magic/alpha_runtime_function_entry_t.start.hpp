#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.BeginAddress", begin_address, 0x0, 0x20, true, 0xb6a96ef9731e9b36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.EndAddress", end_address, 0x20, 0x20, true, 0xbd0357e985dad991)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.ExceptionHandler", exception_handler, 0x40, 0x20, true, 0x7f8ae7b47788fef4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.HandlerData", handler_data, 0x60, 0x20, true, 0x1ba9182f84c9fb82)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.PrologEndAddress", prolog_end_address, 0x80, 0x20, true, 0x7a02f24587517ad6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif