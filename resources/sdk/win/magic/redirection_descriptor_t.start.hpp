#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REDIRECTION_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x3880c759f06c52d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REDIRECTION_DESCRIPTOR.FunctionCount", function_count, 0x20, 0x20, true, 0xb959c1fd64173b61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcredirection_function_descriptor_t ), "_REDIRECTION_DESCRIPTOR.Redirections", redirections, 0x40, 0x40, true, 0xc57beb5692e7a796)
#else
#define _m00
#define _m01
#define _m02
#endif