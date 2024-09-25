#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_NPEM_INTERFACE_CONTEXT.NpemEnabled", npem_enabled, 0x0, 0x8, true, 0x80d55be16670569c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_control_t*), "_PCI_NPEM_INTERFACE_CONTEXT.NpemControl", npem_control, 0x40, 0x40, true, 0x316f11023824f581)
#else
#define _m00
#define _m01
#endif