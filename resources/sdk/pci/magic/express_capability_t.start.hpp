#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "_PCI_EXPRESS_CAPABILITY.Header", header, 0x0, 0x10, true, 0x2a83e8de748a0a02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_capabilities_register_t), "_PCI_EXPRESS_CAPABILITY.ExpressCapabilities", express_capabilities, 0x10, 0x10, true, 0x7e267672bce03365)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_capabilities_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceCapabilities", device_capabilities, 0x20, 0x20, true, 0x10b78e51b098c3c8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceControl", device_control, 0x40, 0x10, true, 0x45fb45bcb1d091d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_status_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceStatus", device_status, 0x50, 0x10, true, 0x41f4d2b247c7b12f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_link_capabilities_register_t), "_PCI_EXPRESS_CAPABILITY.LinkCapabilities", link_capabilities, 0x60, 0x20, true, 0x3afbfd06ef0b62fc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_link_control_register_t), "_PCI_EXPRESS_CAPABILITY.LinkControl", link_control, 0x80, 0x10, true, 0x6663b31396a03ba8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_link_status_register_t), "_PCI_EXPRESS_CAPABILITY.LinkStatus", link_status, 0x90, 0x10, true, 0xd5155e56b071fb70)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_slot_capabilities_register_t), "_PCI_EXPRESS_CAPABILITY.SlotCapabilities", slot_capabilities, 0xa0, 0x20, true, 0x53f244e9f37adc70)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_slot_control_register_t), "_PCI_EXPRESS_CAPABILITY.SlotControl", slot_control, 0xc0, 0x10, true, 0x2eef455c91bac94f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_slot_status_register_t), "_PCI_EXPRESS_CAPABILITY.SlotStatus", slot_status, 0xd0, 0x10, true, 0xfd7c7275c0403d0d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_root_control_register_t), "_PCI_EXPRESS_CAPABILITY.RootControl", root_control, 0xe0, 0x10, true, 0x1e40928bea624f1f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_root_capabilities_register_t), "_PCI_EXPRESS_CAPABILITY.RootCapabilities", root_capabilities, 0xf0, 0x10, true, 0xa6a61247e124bd60)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_root_status_register_t), "_PCI_EXPRESS_CAPABILITY.RootStatus", root_status, 0x100, 0x20, true, 0x47ddb75a9da54800)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_capabilities_2_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceCapabilities2", device_capabilities2, 0x120, 0x20, true, 0xdf894376a1cc0e0a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_2_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceControl2", device_control2, 0x140, 0x10, true, 0xddce737d64ba032a)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_device_status_2_register_t), "_PCI_EXPRESS_CAPABILITY.DeviceStatus2", device_status2, 0x150, 0x10, true, 0x149f96373f26056c)
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
#define _m13
#define _m14
#define _m15
#define _m16
#endif