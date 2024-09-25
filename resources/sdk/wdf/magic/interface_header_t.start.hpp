#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WDF_INTERFACE_HEADER.InterfaceType", interface_type, 0x0, 0x40, true, 0xd2d0e8ad9723651e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERFACE_HEADER.InterfaceSize", interface_size, 0x40, 0x20, true, 0x3249da92b9d9f74a)
#else
#define _m00
#define _m01
#endif