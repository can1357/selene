#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::interface_t), "_SDEV_IDENTIFIER_INTERFACE.InterfaceHeader", interface_header, 0x0, 0x0, true, 0x2a4f56b9b7b5fb18)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(void*)>*), "_SDEV_IDENTIFIER_INTERFACE.GetIdentifier", get_identifier, 0x100, 0x40, true, 0xf9fe18298e2461b3)
#else
#define _m00
#define _m01
#endif