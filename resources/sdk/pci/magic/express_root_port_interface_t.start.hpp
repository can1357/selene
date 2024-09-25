#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.Size", size, 0x0, 0x10, true, 0x77a65a33ae693f4c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.Version", version, 0x10, 0x10, true, 0xea36019e9c0534d2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.Context", context, 0x40, 0x40, true, 0xf6527ee76370d874)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xd4d9989ee0d95826)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xa1f48ed9cf94934d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, void*, uint32_t, uint32_t)>*), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.ReadConfigSpace", read_config_space, 0x100, 0x40, true, 0x6e2b54229c8c2168)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, void*, uint32_t, uint32_t)>*), "_PCI_EXPRESS_ROOT_PORT_INTERFACE.WriteConfigSpace", write_config_space, 0x140, 0x40, true, 0x8e8bd0b4219c7ae1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif