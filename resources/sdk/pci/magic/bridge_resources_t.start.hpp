#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_BRIDGE_RESOURCES.MemoryWindow", memory_window, 0x0, 0xa0, true, 0xff12f625904ad21c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_BRIDGE_RESOURCES.PrefetchWindow", prefetch_window, 0xa0, 0xa0, true, 0x2a709c7fb5d1465a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_BRIDGE_RESOURCES.IoWindow", io_window, 0x140, 0xa0, true, 0x2c709ccc08f649a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 3>), "_PCI_BRIDGE_RESOURCES.VgaRange", vga_range, 0x1e0, 0xe0, true, 0x7404e5107f8c3007)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 6>), "_PCI_BRIDGE_RESOURCES.ByIndex", by_index, 0x0, 0xc0, true, 0x9d478826f4bdc6d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif