#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_HEADER.VendorID", vendor_id, 0x0, 0x10, true, 0x4a1f97e61dfe0d8f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_HEADER.DeviceID", device_id, 0x10, 0x10, true, 0x8cc6e8187e7ae660)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_HEADER.Command", command, 0x20, 0x10, true, 0xf0cccef38e68e39e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_COMMON_HEADER.Status", status, 0x30, 0x10, true, 0xfb231886626bea98)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.RevisionID", revision_id, 0x40, 0x8, true, 0xc8c1868da1184b79)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.ProgIf", prog_if, 0x48, 0x8, true, 0xbf407c026baefe5e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.SubClass", sub_class, 0x50, 0x8, true, 0x7f6e39f200f82de5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.BaseClass", base_class, 0x58, 0x8, true, 0xe81c87454069ab6d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.CacheLineSize", cache_line_size, 0x60, 0x8, true, 0xc4f04d35b1acb40c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.LatencyTimer", latency_timer, 0x68, 0x8, true, 0x3b549a6689465886)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.HeaderType", header_type, 0x70, 0x8, true, 0xd68ede81b3bea13a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_COMMON_HEADER.BIST", bist, 0x78, 0x8, true, 0x644cabd6c2d168ab)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_0_t), "_PCI_COMMON_HEADER.type0", type0, 0x80, 0x80, true, 0x9e0dda66506c933)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_1_t), "_PCI_COMMON_HEADER.type1", type1, 0x80, 0x80, true, 0x6b49a6a1f204ee92)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::header_type_2_t), "_PCI_COMMON_HEADER.type2", type2, 0x80, 0x80, true, 0xe834112eb4c0fcc9)
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