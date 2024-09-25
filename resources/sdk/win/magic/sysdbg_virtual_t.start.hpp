#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_VIRTUAL.Address", address, 0x0, 0x40, true, 0x7fbcad1a5fa5e426)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_VIRTUAL.Buffer", buffer, 0x40, 0x40, true, 0xe8f5ca157eba7cf0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_VIRTUAL.Request", request, 0x80, 0x20, true, 0x1269d234542e61a1)
#else
#define _m00
#define _m01
#define _m02
#endif