#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::busmaster_rid_type_t), "_PCI_BUSMASTER_DESCRIPTOR.Type", type, 0x0, 0x20, true, 0xb847d33dc7594860)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_BUSMASTER_DESCRIPTOR.Segment", segment, 0x20, 0x20, true, 0x1f043daf5dc638b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.DeviceRid.Bus", bus, 0x0, 0x8, true, 0x714bff32679e6389)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.DeviceRid.Device", device, 0x8, 0x8, true, 0x8fe8cd9e523f44ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.DeviceRid.Function", function, 0x10, 0x8, true, 0xe583e79978f97526)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_device_rid_t), "_PCI_BUSMASTER_DESCRIPTOR.DeviceRid", device_rid, 0x40, 0x20, true, 0xcb6563fae53287b8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.BridgeRid.Bus", bus, 0x0, 0x8, true, 0x764266e52dae13a9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.BridgeRid.Device", device, 0x8, 0x8, true, 0xa22cac7d2957fe0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.BridgeRid.Function", function, 0x10, 0x8, true, 0x7d463649bf8b5865)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_device_rid_t), "_PCI_BUSMASTER_DESCRIPTOR.BridgeRid", bridge_rid, 0x40, 0x20, true, 0xda411b0632b9e5ff)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.MultipleBridges.SecondaryBus", secondary_bus, 0x0, 0x8, true, 0x7b7638648e9f1c1c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUSMASTER_DESCRIPTOR.MultipleBridges.SubordinateBus", subordinate_bus, 0x8, 0x8, true, 0x623091b3065b3a8b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_multiple_bridges_t), "_PCI_BUSMASTER_DESCRIPTOR.MultipleBridges", multiple_bridges, 0x40, 0x10, true, 0x9fe2b20b98e2bd47)
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
#endif