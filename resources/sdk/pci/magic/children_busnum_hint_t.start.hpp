#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CHILDREN_BUSNUM_HINT.Secondary", secondary, 0x0, 0x8, true, 0x94af4ddaf5e7ac24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CHILDREN_BUSNUM_HINT.Subordinate", subordinate, 0x8, 0x8, true, 0xdce3b9465bce709e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CHILDREN_BUSNUM_HINT.SpreadResource", spread_resource, 0x10, 0x8, true, 0x1ea0be51d235d0b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_CHILDREN_BUSNUM_HINT.MinimumBusNumbersNeeded", minimum_bus_numbers_needed, 0x18, 0x8, true, 0xccd396abe7062ab2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CHILDREN_BUSNUM_HINT.BusNumbersForNonHotplugChildren", bus_numbers_for_non_hotplug_children, 0x20, 0x20, true, 0x888e8dde7b1820c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CHILDREN_BUSNUM_HINT.ChildrenBridgeCount", children_bridge_count, 0x40, 0x20, true, 0x6f1728e41b958fc9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CHILDREN_BUSNUM_HINT.DirectHotplugChildrenCount", direct_hotplug_children_count, 0x60, 0x20, true, 0x46932c3e06da5381)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CHILDREN_BUSNUM_HINT.DescendentHotplugPortCount", descendent_hotplug_port_count, 0x80, 0x20, true, 0x9745c4da781e6477)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif