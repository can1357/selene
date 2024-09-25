#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMSECURITY_ATTRIBUTES.nLength", n_length, 0x0, 0x20, true, 0x6016ab95d66dbe29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMSECURITY_ATTRIBUTES.lpSecurityDescriptor", lp_security_descriptor, 0x20, 0x20, true, 0x34d1505768012924)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_REMSECURITY_ATTRIBUTES.bInheritHandle", b_inherit_handle, 0x40, 0x20, true, 0x2962b764190cc8ff)
#else
#define _m00
#define _m01
#define _m02
#endif