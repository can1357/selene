#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BRIDGE_WINDOW_REQUIREMENT.Disabled", disabled, 0x0, 0x8, true, 0xace281045b5a9836)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BRIDGE_WINDOW_REQUIREMENT.Size", size, 0x40, 0x40, true, 0x8d940f4d29f2107b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BRIDGE_WINDOW_REQUIREMENT.Alignment", alignment, 0x80, 0x40, true, 0x13ceb9f7e17aa4f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_BRIDGE_WINDOW_REQUIREMENT.LengthBelow4GB", length_below4gb, 0xc0, 0x40, true, 0x5818cfadfe62fdbf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif