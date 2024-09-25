#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSDBG_PHYSICAL.Address", address, 0x0, 0x40, true, 0xa4d58c1d58583008)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_PHYSICAL.Buffer", buffer, 0x40, 0x40, true, 0xdbc9c773f79d3317)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_PHYSICAL.Request", request, 0x80, 0x20, true, 0x2a398e6edb8b04f9)
#else
#define _m00
#define _m01
#define _m02
#endif