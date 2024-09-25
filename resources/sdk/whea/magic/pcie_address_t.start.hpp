#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIE_ADDRESS.Segment", segment, 0x0, 0x0, false, 0x2f2937bc8076f6c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIE_ADDRESS.Bus", bus, 0x0, 0x0, false, 0xf81ce9bb010018aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIE_ADDRESS.Device", device, 0x0, 0x0, false, 0xda602bfb88879b22)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIE_ADDRESS.Function", function, 0x0, 0x0, false, 0x28bd94a67f4c25cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif