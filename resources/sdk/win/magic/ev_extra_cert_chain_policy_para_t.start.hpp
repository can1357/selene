#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EV_EXTRA_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x9bed06ca9d35cd9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EV_EXTRA_CERT_CHAIN_POLICY_PARA.dwRootProgramQualifierFlags", dw_root_program_qualifier_flags, 0x20, 0x20, true, 0x3722b8a43c715e0c)
#else
#define _m00
#define _m01
#endif