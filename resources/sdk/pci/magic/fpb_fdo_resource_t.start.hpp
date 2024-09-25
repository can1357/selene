#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_arbiter_t), "_PCI_FPB_FDO_RESOURCE.Root.BusNumbersArbiter", bus_numbers_arbiter, 0x0, 0xc0, true, 0xa519a72a1c4c0bea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_root_t), "_PCI_FPB_FDO_RESOURCE.Root", root, 0x0, 0xc0, true, 0x855ef73e5123a05f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_PCI_FPB_FDO_RESOURCE.Node.StartingNonMemoryResources", starting_non_memory_resources, 0x0, 0x40, true, 0x70d2541cca8b31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_FDO_RESOURCE.Node.StartingNonMemoryResourcesCount", starting_non_memory_resources_count, 0x40, 0x20, true, 0x7bea84a8945623eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PCI_FPB_FDO_RESOURCE.Node.CurrentResourceList", current_resource_list, 0x80, 0x40, true, 0x71259b4bb3bf92bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_FDO_RESOURCE.Node.CurrentResourceListSize", current_resource_list_size, 0xc0, 0x20, true, 0xc1e873a910215985)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_node_t), "_PCI_FPB_FDO_RESOURCE.Node", node, 0x0, 0x0, true, 0x7313454449799407)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif