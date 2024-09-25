#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_NPEM_CONTROL.Device", device, 0x0, 0x40, true, 0x8204b490ad3b8310)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_npem_capability_register_t), "_PCI_NPEM_CONTROL.Capability", capability, 0x40, 0x20, true, 0xa103653f71c300d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_NPEM_CONTROL.LastNpemCommandPending", last_npem_command_pending, 0x60, 0x8, true, 0x2ab95a4630141684)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_NPEM_CONTROL.LastNpemCommandTime", last_npem_command_time, 0x80, 0x40, true, 0x1cc18f9f1cfce372)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_NPEM_CONTROL.Lock", lock, 0xc0, 0x40, true, 0x28cc227106cfb30b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_NPEM_CONTROL.RefCount", ref_count, 0x100, 0x20, true, 0x4e83ac945f85d994)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif