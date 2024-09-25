#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENTS.MemoryWindow", memory_window, 0x0, 0x0, true, 0x7540336db7e323d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENTS.PrefetchWindow", prefetch_window, 0x100, 0x0, true, 0xb04bc25c6d0dec9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENTS.IoWindow", io_window, 0x200, 0x0, true, 0xc09dd865a31b1ba8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENTS.MemoryWindowSpread", memory_window_spread, 0x300, 0x0, true, 0xf1c2139e79f7197)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENTS.PrefetchWindowSpread", prefetch_window_spread, 0x400, 0x0, true, 0x9b9655a17e885ba7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif