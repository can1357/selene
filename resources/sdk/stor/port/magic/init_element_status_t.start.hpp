#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INIT_ELEMENT_STATUS.OperationCode", operation_code, 0x0, 0x8, true, 0x47950e8a86b357aa)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INIT_ELEMENT_STATUS.LogicalUnitNubmer", logical_unit_nubmer, 0xd, 0x3, true, 0xeda7429bbdf1263b, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INIT_ELEMENT_STATUS.NoBarCode", no_bar_code, 0x2f, 0x1, true, 0xdcbe4ca92b4437e4, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif