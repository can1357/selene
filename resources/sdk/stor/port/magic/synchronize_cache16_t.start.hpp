#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYNCHRONIZE_CACHE16.OperationCode", operation_code, 0x0, 0x8, true, 0xc2d5715a201a3a69)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYNCHRONIZE_CACHE16.Immediate", immediate, 0x9, 0x1, true, 0x46d814dd159fac63, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SYNCHRONIZE_CACHE16.LogicalBlock", logical_block, 0x10, 0x40, true, 0x291114f92b6f2cf0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SYNCHRONIZE_CACHE16.BlockCount", block_count, 0x50, 0x20, true, 0x2439b7c148407849)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYNCHRONIZE_CACHE16.Control", control, 0x78, 0x8, true, 0x2732b81bbb63ba48)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif