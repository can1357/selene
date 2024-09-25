#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_REDIRECTION_FUNCTION_DESCRIPTOR.DllName", dll_name, 0x0, 0x40, true, 0xc89e46cab232571f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_REDIRECTION_FUNCTION_DESCRIPTOR.FunctionName", function_name, 0x40, 0x40, true, 0xc68fe32302f62ae0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REDIRECTION_FUNCTION_DESCRIPTOR.RedirectionTarget", redirection_target, 0x80, 0x40, true, 0x862b3cc496b8140a)
#else
#define _m00
#define _m01
#define _m02
#endif