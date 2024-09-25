#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 6>), "_PCI_DEVICE_REQUIREMENTS.Bars", bars, 0x0, 0x0, true, 0x93fbdfc5f77b4c87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type0.RomBar", rom_bar, 0x0, 0x0, true, 0xbdcbfced6087cd2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 6>), "_PCI_DEVICE_REQUIREMENTS.type0.VfBars", vf_bars, 0x100, 0x0, true, 0xad9d8c6470155bf5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_type0_t), "_PCI_DEVICE_REQUIREMENTS.type0", type0, 0x600, 0x0, true, 0xa12481ef1bc8699f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type1.RomBar", rom_bar, 0x0, 0x0, true, 0x110826e853e1faae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type1.MemoryWindow", memory_window, 0x100, 0x0, true, 0x13ab2fd525d93c14)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type1.PrefetchWindow", prefetch_window, 0x200, 0x0, true, 0xbc5752fd934558bd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type1.IoWindow", io_window, 0x300, 0x0, true, 0x7a17c55491a65500)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_type1_t), "_PCI_DEVICE_REQUIREMENTS.type1", type1, 0x600, 0x0, true, 0x15ca8b4a2f899f3e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type2.SocketBar", socket_bar, 0x0, 0x0, true, 0x5c7e5c3cfe548bee)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_REQUIREMENTS.type2.LegacyBar", legacy_bar, 0x100, 0x0, true, 0xa72972d292d1998a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 2>), "_PCI_DEVICE_REQUIREMENTS.type2.MemoryWindows", memory_windows, 0x200, 0x0, true, 0x9aeab1976ecbcc58)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 2>), "_PCI_DEVICE_REQUIREMENTS.type2.IoWindows", io_windows, 0x400, 0x0, true, 0xa5af1ddea9e6abdc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_type2_t), "_PCI_DEVICE_REQUIREMENTS.type2", type2, 0x600, 0x0, true, 0x85c3c364570cd9fc)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::resource_descriptor_t, 13>), "_PCI_DEVICE_REQUIREMENTS.ByIndex", by_index, 0x0, 0x0, true, 0xb87ace64868715f9)
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