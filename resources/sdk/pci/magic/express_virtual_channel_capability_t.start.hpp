#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Header", header, 0x0, 0x20, true, 0x3f03b5316e3ccc8b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_channel_capabilities1_t), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Capabilities1", capabilities1, 0x20, 0x20, true, 0xde4f35144da7188d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_channel_capabilities2_t), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Capabilities2", capabilities2, 0x40, 0x20, true, 0xa6a6c909cecc1223)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_channel_control_t), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Control", control, 0x60, 0x10, true, 0x5718c4b30e9aabcf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union wdf::virtual_channel_status_t), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Status", status, 0x70, 0x10, true, 0x4870926435c48e88)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::virtual_resource_t, 8>), "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.Resource", resource, 0x80, 0x0, true, 0x593a7f8bafc4410d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif