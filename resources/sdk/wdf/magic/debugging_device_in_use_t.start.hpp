#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_DEBUGGING_DEVICE_IN_USE.NameSpace", name_space, 0x0, 0x20, true, 0xa74b15a9cc1a56d4, 32, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUGGING_DEVICE_IN_USE.StructureLength", structure_length, 0x20, 0x20, true, 0x7d3ace283e514ad9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct acpi::debugging_device_in_use_t), "_DEBUGGING_DEVICE_IN_USE.AcpiDevice", acpi_device, 0x40, 0x40, true, 0x10977af3274d15cc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::debugging_device_in_use_t), "_DEBUGGING_DEVICE_IN_USE.PciDevice", pci_device, 0x40, 0x60, true, 0x4847f528d68553a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif