#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BRIDGE_REQUIREMENT_HINT.Link", link, 0x0, 0x80, true, 0xcb605539ca5f23b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_BRIDGE_REQUIREMENT_HINT.ChildListHead", child_list_head, 0x80, 0x80, true, 0xe523ac23f34c8a83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_requirement_hint_t*), "_PCI_BRIDGE_REQUIREMENT_HINT.Parent", parent, 0x100, 0x40, true, 0x97171955560e9624)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_BRIDGE_REQUIREMENT_HINT.Lock", lock, 0x140, 0xc0, true, 0xd69c5f6caa090188)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::slot_number_t), "_PCI_BRIDGE_REQUIREMENT_HINT.Slot", slot, 0x200, 0x20, true, 0x5765e193e01a13a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::children_busnum_hint_t), "_PCI_BRIDGE_REQUIREMENT_HINT.ChildBusNumHint", child_bus_num_hint, 0x220, 0xa0, true, 0xc57a423d68283b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BRIDGE_REQUIREMENT_HINT.MemBarSize", mem_bar_size, 0x2c0, 0x40, true, 0xec045876f9ed7e6f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BRIDGE_REQUIREMENT_HINT.PrefetchBarSize", prefetch_bar_size, 0x300, 0x40, true, 0x7c60ae8122453df6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENT_HINT.MemoryWindow", memory_window, 0x340, 0x0, true, 0x1d6d703a52b4632e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENT_HINT.PrefetchWindow", prefetch_window, 0x440, 0x0, true, 0x960b73c97ed1ae1a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENT_HINT.IoWindow", io_window, 0x540, 0x0, true, 0xa67786e07a8ecfda)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENT_HINT.MemoryWindowSpread", memory_window_spread, 0x640, 0x0, true, 0xa47c0bffc246f761)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bridge_window_requirement_t), "_PCI_BRIDGE_REQUIREMENT_HINT.PrefetchWindowSpread", prefetch_window_spread, 0x740, 0x0, true, 0x81b5e0d9ea2fdb74)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif