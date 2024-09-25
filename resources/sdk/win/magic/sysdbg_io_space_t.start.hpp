#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_IO_SPACE.Address", address, 0x0, 0x40, true, 0x8eb493dbd9b13f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_IO_SPACE.Buffer", buffer, 0x40, 0x40, true, 0x3764d0ba914488b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_IO_SPACE.Request", request, 0x80, 0x20, true, 0x7fa778e1d6ab0b69)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_SYSDBG_IO_SPACE.InterfaceType", interface_type, 0xa0, 0x20, true, 0x790cc4a3112713f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_IO_SPACE.BusNumber", bus_number, 0xc0, 0x20, true, 0xe6a5395a87b2c7af)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_IO_SPACE.AddressSpace", address_space, 0xe0, 0x20, true, 0xd3cd8eee99fb0f7b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif