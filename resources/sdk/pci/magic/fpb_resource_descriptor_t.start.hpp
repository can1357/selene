#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::fpb_resource_type_t), "_PCI_FPB_RESOURCE_DESCRIPTOR.Type", type, 0x0, 0x20, true, 0xb8e3de0924f3ccb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_memory_range_list_t), "_PCI_FPB_RESOURCE_DESCRIPTOR.Memory.ResourceList", resource_list, 0x0, 0x80, true, 0x648931692928cdf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_memory_t), "_PCI_FPB_RESOURCE_DESCRIPTOR.Memory", memory, 0x40, 0x80, true, 0xcfc87859a5bb1900)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_PCI_FPB_RESOURCE_DESCRIPTOR.Rid.RidMap", rid_map, 0x0, 0x80, true, 0xf3d045c20b7165b3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_PCI_FPB_RESOURCE_DESCRIPTOR.Rid.RidMapBuffer", rid_map_buffer, 0x80, 0x0, true, 0x6be303b6576073d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_rid_t), "_PCI_FPB_RESOURCE_DESCRIPTOR.Rid", rid, 0x40, 0x80, true, 0xf10b2b2728b24f74)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif