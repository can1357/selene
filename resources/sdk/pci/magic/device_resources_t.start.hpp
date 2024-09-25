#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 6>), "_PCI_DEVICE_RESOURCES.Bars", bars, 0x0, 0xc0, true, 0x2fc49ebbe60dcd67)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type0.RomBar", rom_bar, 0x0, 0xa0, true, 0x5af229252e34d83f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 6>), "_PCI_DEVICE_RESOURCES.type0.VfBars", vf_bars, 0xa0, 0xc0, true, 0x146488c61002ad5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_type0_t), "_PCI_DEVICE_RESOURCES.type0", type0, 0x3c0, 0x60, true, 0x2a1ecefe78c75961)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type1.RomBar", rom_bar, 0x0, 0xa0, true, 0x65d5f7d4a51045b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type1.MemoryWindow", memory_window, 0xa0, 0xa0, true, 0xc51e2366f76c3171)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type1.PrefetchWindow", prefetch_window, 0x140, 0xa0, true, 0x7fecfc2f4494c505)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type1.IoWindow", io_window, 0x1e0, 0xa0, true, 0xd3cac86d5010ad28)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_type1_t), "_PCI_DEVICE_RESOURCES.type1", type1, 0x3c0, 0x80, true, 0x89751e88998ecd1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type2.SocketBar", socket_bar, 0x0, 0xa0, true, 0x11d7fa9c3367047)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "_PCI_DEVICE_RESOURCES.type2.LegacyBar", legacy_bar, 0xa0, 0xa0, true, 0x732d9b3b61ed5c13)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 2>), "_PCI_DEVICE_RESOURCES.type2.MemoryWindows", memory_windows, 0x140, 0x40, true, 0xb33242a839bdf741)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 2>), "_PCI_DEVICE_RESOURCES.type2.IoWindows", io_windows, 0x280, 0x40, true, 0xdf1da392ef9791af)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_type2_t), "_PCI_DEVICE_RESOURCES.type2", type2, 0x3c0, 0xc0, true, 0xb68020463940e1c0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 13>), "_PCI_DEVICE_RESOURCES.ByIndex", by_index, 0x0, 0x20, true, 0xc8eda42c773d9a64)
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
#endif