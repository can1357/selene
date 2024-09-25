#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER.Version", version, 0x0, 0x0, false, 0xd9b6065f0f53a240)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER.Count", count, 0x0, 0x0, false, 0xd4967ca1837ac6eb)
#else
#define _m00
#define _m01
#endif