#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TOPOLOGY_ADDRESS.PciBusNumber", pci_bus_number, 0x0, 0x20, true, 0xdb3aebeb2fd7b5cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TOPOLOGY_ADDRESS.PciDeviceNumber", pci_device_number, 0x20, 0x20, true, 0x207f9888095b8cc7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TOPOLOGY_ADDRESS.PciFunctionNumber", pci_function_number, 0x40, 0x20, true, 0x30080aab415c5773)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_TOPOLOGY_ADDRESS.RootHubPortNumber", root_hub_port_number, 0x80, 0x10, true, 0x77716dfc55920d9d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 5>), "_USB_TOPOLOGY_ADDRESS.HubPortNumber", hub_port_number, 0x90, 0x50, true, 0x513fe56b8c17a7f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif