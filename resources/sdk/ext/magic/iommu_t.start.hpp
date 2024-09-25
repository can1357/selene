#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXT_IOMMU.Context", context, 0x0, 0x0, false, 0x980edb93cb3067f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ext::iommu_known_iommu_type_t), "_EXT_IOMMU.Type", type, 0x0, 0x0, false, 0xc0f9d0002aa52a81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ext::iommu_capabilities_t), "_EXT_IOMMU.Capabilities", capabilities, 0x0, 0x0, false, 0x6efbf1fb66ca601f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_IOMMU.MaxOutputAddressWidth", max_output_address_width, 0x0, 0x0, false, 0x3489a72e5ec05ef)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXT_IOMMU.Flags.PciSegment", pci_segment, 0x0, 0x0, false, 0xcf9dd9d887d20552, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_EXT_IOMMU.Flags", flags, 0x0, 0x0, false, 0xd28e5fa672feda67)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXT_IOMMU.PciSegmentNumber", pci_segment_number, 0x0, 0x0, false, 0xf828b2dadc35839b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ext::iommu_function_table_t), "_EXT_IOMMU.FunctionTable", function_table, 0x0, 0x0, false, 0x4cc67000b6d740f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif