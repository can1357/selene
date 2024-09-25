#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOGSENSE.OperationCode", operation_code, 0x0, 0x8, true, 0xa2f002a54bddf442)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOGSENSE.SPBit", sp_bit, 0x8, 0x1, true, 0xd250a040faa376d5, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_LOGSENSE.PPCBit", ppc_bit, 0x9, 0x1, true, 0x93511bcc6e095fcd, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_LOGSENSE.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x66d6643a6817abb4, 3, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_LOGSENSE.PageCode", page_code, 0x10, 0x6, true, 0xa082ac53d8cb11a8, 6, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_LOGSENSE.PCBit", pc_bit, 0x16, 0x2, true, 0x9fe96e8a456992e0, 2, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOGSENSE.SubPageCode", sub_page_code, 0x18, 0x8, true, 0x17debc0fe0f8f434)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOGSENSE.ParameterPointer", parameter_pointer, 0x28, 0x10, true, 0x34630b9788b3169e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_LOGSENSE.AllocationLength", allocation_length, 0x38, 0x10, true, 0xeb906c4f90aeeb26)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOGSENSE.Control", control, 0x48, 0x8, true, 0x4383b3addf819968)
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
#endif