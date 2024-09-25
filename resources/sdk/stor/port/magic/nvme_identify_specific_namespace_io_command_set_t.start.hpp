#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.ZOC.VariableZoneCapacity", variable_zone_capacity, 0x0, 0x0, false, 0x68c8322f34f97268, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.ZOC.ZoneExcursions", zone_excursions, 0x0, 0x0, false, 0x18b9072fdd7251bc, 1, uint16_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_zoc_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.ZOC", zoc, 0x0, 0x0, false, 0x6a1fe4d95f8909d)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.OZCS.ReadAcrossZoneBoundaries", read_across_zone_boundaries, 0x0, 0x0, false, 0xbc679a463dab0456, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_ozcs_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.OZCS", ozcs, 0x0, 0x0, false, 0x57c598e0818bee49)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.MAR", mar, 0x0, 0x0, false, 0x5dd8e2eecade4597)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.MOR", mor, 0x0, 0x0, false, 0x16eba7c721f97dad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.RRL", rrl, 0x0, 0x0, false, 0x9f75afd5a688c85d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.FRL", frl, 0x0, 0x0, false, 0xdc3289975cafdea2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::nvme_lba_zone_format_t, 16>), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.LBAEF", lbaef, 0x0, 0x0, false, 0xf8ea26f5928ac3bf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "NVME_IDENTIFY_SPECIFIC_NAMESPACE_IO_COMMAND_SET.VS", vs, 0x0, 0x0, false, 0x2f7ef2df46723279)
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
#endif