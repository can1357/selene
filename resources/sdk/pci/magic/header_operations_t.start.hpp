#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::device_t*, union pci::device_requirements_t*)>*), "_PCI_HEADER_OPERATIONS.GetRequirements", get_requirements, 0x0, 0x40, true, 0xa6423ece266195dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::device_t*, union pci::device_resources_t*)>*), "_PCI_HEADER_OPERATIONS.GetResources", get_resources, 0x40, 0x40, true, 0xdf5d200610f3e9ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct pci::device_t*, union pci::device_resources_t*)>*), "_PCI_HEADER_OPERATIONS.SetResources", set_resources, 0x80, 0x40, true, 0xb55180fa4b948704)
#else
#define _m00
#define _m01
#define _m02
#endif