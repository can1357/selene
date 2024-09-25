#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PNP_EXTENDED_ADDRESS_INTERFACE.Size", size, 0x0, 0x10, true, 0x14fa6c1a56d2a50c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PNP_EXTENDED_ADDRESS_INTERFACE.Version", version, 0x10, 0x10, true, 0x70651368bb631954)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PNP_EXTENDED_ADDRESS_INTERFACE.Context", context, 0x40, 0x40, true, 0xfb1f674f41b5a449)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PNP_EXTENDED_ADDRESS_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x25faf164b37dda56)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PNP_EXTENDED_ADDRESS_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x311cff2360ebdc04)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint64_t*)>*), "_PNP_EXTENDED_ADDRESS_INTERFACE.QueryExtendedAddress", query_extended_address, 0x100, 0x40, true, 0x65fe110e3b593aaa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif