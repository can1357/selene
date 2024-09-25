#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_CONTROL_SPACE.Address", address, 0x0, 0x40, true, 0xab151140f5c64a71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_CONTROL_SPACE.Buffer", buffer, 0x40, 0x40, true, 0x2c1faff6b9f78260)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_CONTROL_SPACE.Request", request, 0x80, 0x20, true, 0xefc6fe52ff854ce7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_CONTROL_SPACE.Processor", processor, 0xa0, 0x20, true, 0xbe9d24bd0a7767ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif