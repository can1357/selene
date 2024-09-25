#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6FORMAT.OperationCode", operation_code, 0x0, 0x8, true, 0x733c99eb832fa876)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CDB6FORMAT.FormatControl", format_control, 0x8, 0x5, true, 0x725d442f030afe29, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB6FORMAT.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x1f80e8524f35daae, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6FORMAT.FReserved1", f_reserved1, 0x10, 0x8, true, 0xf4e37bca3441183a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6FORMAT.InterleaveMsb", interleave_msb, 0x18, 0x8, true, 0xf697f9f8e4059a6c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6FORMAT.InterleaveLsb", interleave_lsb, 0x20, 0x8, true, 0xd22141adc71c7e02)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6FORMAT.FReserved2", f_reserved2, 0x28, 0x8, true, 0x7ff899283ef59bf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif