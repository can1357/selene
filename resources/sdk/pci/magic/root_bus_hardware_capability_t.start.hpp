#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum pci::hardware_interface_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.SecondaryInterface", secondary_interface, 0x0, 0x20, true, 0xce3aca64fcce29f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.BusCapabilitiesFound", bus_capabilities_found, 0x20, 0x8, true, 0x8c151889e8846f3d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.CurrentSpeedAndMode", current_speed_and_mode, 0x40, 0x20, true, 0xa5206e3c7b16be64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.SupportedSpeedsAndModes", supported_speeds_and_modes, 0x60, 0x20, true, 0x3245069ff3df70f6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.DeviceIDMessagingCapable", device_id_messaging_capable, 0x80, 0x8, true, 0x1d9bf43aa74a081f)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.SecondaryBusWidth", secondary_bus_width, 0xa0, 0x20, true, 0xa205f422954bd362, 32, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::root_bus_osc_support_field_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.OscFeatureSupport", osc_feature_support, 0xc0, 0x20, true, 0xc04a38afc6bae296)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::root_bus_osc_control_field_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.OscControlRequest", osc_control_request, 0xe0, 0x20, true, 0x89ac0a77ec3070c7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::root_bus_osc_control_field_t), "_PCI_ROOT_BUS_HARDWARE_CAPABILITY.OscControlGranted", osc_control_granted, 0x100, 0x20, true, 0x2a747c765e8a1d42)
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
#endif