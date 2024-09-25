#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_ATTRIBUTES.nLength", n_length, 0x0, 0x20, true, 0x76248230af5afc52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_ATTRIBUTES.lpSecurityDescriptor", lp_security_descriptor, 0x40, 0x40, true, 0x2c8fbbfbc23a8ef5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SECURITY_ATTRIBUTES.bInheritHandle", b_inherit_handle, 0x80, 0x20, true, 0x2717e6d2f6a78163)
#else
#define _m00
#define _m01
#define _m02
#endif