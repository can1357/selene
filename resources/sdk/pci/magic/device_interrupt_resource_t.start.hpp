#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::interrupt_type_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.Type", type, 0x0, 0x20, true, 0x867d1dd9d9ece425)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.InterruptLine", interrupt_line, 0x20, 0x8, true, 0xc111ea0bd952200a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.PolicySpecified", policy_specified, 0x28, 0x8, true, 0x29f7045ce5504852)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.Msi.GrantedBits", granted_bits, 0x0, 0x8, true, 0x69df1f90de00faca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_vector_data_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.Msi.ConnectionData", connection_data, 0x40, 0xc0, true, 0x9fccb8de5ed11f16)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_msi_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.Msi", msi, 0x40, 0x0, true, 0xf721e6c63c30220b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.BARIndex", bar_index, 0x0, 0x8, true, 0xd08f9f177208d08e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.TableOffset", table_offset, 0x20, 0x20, true, 0x628755f1008f09bf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::msix_table_entry_t*), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.Table", table, 0x40, 0x40, true, 0xbc359fb781485120)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.MessagesGranted", messages_granted, 0x80, 0x20, true, 0x941a6d066deb5329)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.EntryMap", entry_map, 0xc0, 0x40, true, 0x7d8f66b54a335f5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_connection_data_t*), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.ConnectionData", connection_data, 0x100, 0x40, true, 0xc37e7d2978e377ac)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_msi_x_t), "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX", msi_x, 0x40, 0x40, true, 0x74b360bb07aad5f7)
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