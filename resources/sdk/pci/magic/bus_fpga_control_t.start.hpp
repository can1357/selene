#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_BUS_FPGA_CONTROL.ScanBusCountLock", scan_bus_count_lock, 0x0, 0xc0, true, 0x710ba5c4b0067701)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS_FPGA_CONTROL.ScanBusCount", scan_bus_count, 0xc0, 0x20, true, 0x8a83fbdc0d83e673)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_register_t), "_PCI_BUS_FPGA_CONTROL.SavedDeviceControlRegister", saved_device_control_register, 0xe0, 0x10, true, 0xbfb3786833f482fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS_FPGA_CONTROL.SavedUncorrectableMask", saved_uncorrectable_mask, 0x100, 0x20, true, 0xfd0907ef02241d88)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUS_FPGA_CONTROL.SavedCorrectableMask", saved_correctable_mask, 0x120, 0x20, true, 0xf4f8283b3eae5eb0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif