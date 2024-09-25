#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_ROOT_COMPLEX.PciRootBus", pci_root_bus, 0x0, 0x40, true, 0xe1c4d2cdfa7044e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_port_t*), "_ROOT_COMPLEX.IntegratedEndpointList", integrated_endpoint_list, 0x40, 0x40, true, 0x1c3f517997fb82ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_port_t*), "_ROOT_COMPLEX.EventCollectorList", event_collector_list, 0x80, 0x40, true, 0x14827e65c51f09f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_ROOT_COMPLEX.RootPortList", root_port_list, 0xc0, 0x40, true, 0x969e49d84e868f0d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_ROOT_COMPLEX.ListLock", list_lock, 0x100, 0xc0, true, 0x9aca613db300b9f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif