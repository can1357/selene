#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x2090aef7931f0106, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x14f956fae4ec863b, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x226f676e6e260a63)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x608a38d5571dba42)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.URSWRZ", urswrz, 0x20, 0x1, true, 0x6ce64ee7d3c4b08a, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.OptimalNumberOfOpenSequentialWritePreferredZone", optimal_number_of_open_sequential_write_preferred_zone, 0x40, 0x20, true, 0x15c4b9b2217e81ca)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.OptimalNumberOfNonSequentiallyWrittenSequentialWritePreferredZone", optimal_number_of_non_sequentially_written_sequential_write_preferred_zone, 0x60, 0x20, true, 0xff30a1c682731175)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.MaxNumberOfOpenSequentialWriteRequiredZone", max_number_of_open_sequential_write_required_zone, 0x80, 0x20, true, 0x68af9d12c728cf53)
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