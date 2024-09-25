#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_CONFIG.VendorID", vendor_id, 0x0, 0x10, true, 0x5f9bef9daaa05dbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_CONFIG.DeviceID", device_id, 0x10, 0x10, true, 0x9e6fadc2383c8b54)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_CONFIG.Command", command, 0x20, 0x10, true, 0xacb9c6c7b15c2304)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_CONFIG.Status", status, 0x30, 0x10, true, 0xce8cab8f77d17bd9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.RevisionID", revision_id, 0x40, 0x8, true, 0x54af64bcf02e4da0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.ProgIf", prog_if, 0x48, 0x8, true, 0x828a56a1177798da)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.SubClass", sub_class, 0x50, 0x8, true, 0xe97eaf3decc9a2b6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.BaseClass", base_class, 0x58, 0x8, true, 0x2eb7d7a942429278)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.CacheLineSize", cache_line_size, 0x60, 0x8, true, 0x5077c0dbf75f4443)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.LatencyTimer", latency_timer, 0x68, 0x8, true, 0x1d1cce863410c08a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.HeaderType", header_type, 0x70, 0x8, true, 0x910765f1fb006da8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_CONFIG.BIST", bist, 0x78, 0x8, true, 0x1d23c64e7226ca33)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_0_t), "_PCI_COMMON_CONFIG.type0", type0, 0x80, 0x80, true, 0xceb3e293333708c0)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_1_t), "_PCI_COMMON_CONFIG.type1", type1, 0x80, 0x80, true, 0xd20e9777199a2a12)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_2_t), "_PCI_COMMON_CONFIG.type2", type2, 0x80, 0x80, true, 0xea47b19525b9c317)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 192>), "_PCI_COMMON_CONFIG.DeviceSpecific", device_specific, 0x200, 0x0, true, 0xbcb65429ffd3e78f)
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
#define _m15
#endif