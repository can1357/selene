#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.CorrectableSourceIdFun", correctable_source_id_fun, 0x0, 0x3, true, 0xe804d70456a1cdb0, 3, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.CorrectableSourceIdDev", correctable_source_id_dev, 0x3, 0x5, true, 0x34c6b3d80316f471, 5, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.CorrectableSourceIdBus", correctable_source_id_bus, 0x8, 0x8, true, 0x5c8d5d23ddd1576c, 8, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.UncorrectableSourceIdFun", uncorrectable_source_id_fun, 0x10, 0x3, true, 0xa7c6eb3cd9d6ea63, 3, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.UncorrectableSourceIdDev", uncorrectable_source_id_dev, 0x13, 0x5, true, 0xc5c1725194c51d9a, 5, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.UncorrectableSourceIdBus", uncorrectable_source_id_bus, 0x18, 0x8, true, 0xe61765bd981a53e7, 8, uint16_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_ERROR_SOURCE_ID.AsULONG", as_ulong, 0x0, 0x20, true, 0x4d66d758a5a08897)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif