#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION.OperationCode", operation_code, 0x0, 0x8, true, 0xc7013ada46ed774d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PARTITION.Immediate", immediate, 0x8, 0x1, true, 0xecc19e1597be10d4, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PARTITION.Sel", sel, 0x9, 0x1, true, 0xcf414427ba33e6aa, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PARTITION.PartitionSelect", partition_select, 0xa, 0x6, true, 0x2d37d565fcd4f50b, 6, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION.Control", control, 0x28, 0x8, true, 0xc788359b7c4ff4b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif