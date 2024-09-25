#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_ARBITER.FpbFdoNode", fpb_fdo_node, 0x0, 0x40, true, 0xf0fa1ee456ef6d81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_FPB_ARBITER.Lock", lock, 0x40, 0xc0, true, 0xdf12d005176c6eaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_resource_descriptor_t), "_PCI_FPB_ARBITER.Resource", resource, 0x100, 0xc0, true, 0x4edf71ab82e1c659)
#else
#define _m00
#define _m01
#define _m02
#endif