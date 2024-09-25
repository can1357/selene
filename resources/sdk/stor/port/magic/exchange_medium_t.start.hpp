#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXCHANGE_MEDIUM.OperationCode", operation_code, 0x0, 0x8, true, 0xe13218ae21a9283d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_EXCHANGE_MEDIUM.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xdc1770abd621de93, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_EXCHANGE_MEDIUM.TransportElementAddress", transport_element_address, 0x10, 0x10, true, 0x34411cd317fb6334)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_EXCHANGE_MEDIUM.SourceElementAddress", source_element_address, 0x20, 0x10, true, 0xaf5068f7dac2425c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_EXCHANGE_MEDIUM.Destination1ElementAddress", destination1_element_address, 0x30, 0x10, true, 0xf74379094af07284)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_EXCHANGE_MEDIUM.Destination2ElementAddress", destination2_element_address, 0x40, 0x10, true, 0x75e391431264995e)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXCHANGE_MEDIUM.Flip1", flip1, 0x50, 0x1, true, 0x254e31ccd1d389a8, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXCHANGE_MEDIUM.Flip2", flip2, 0x51, 0x1, true, 0xdcb29beffbca97b3, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXCHANGE_MEDIUM.Control", control, 0x58, 0x8, true, 0x68d4ff27a96b7994)
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
#endif