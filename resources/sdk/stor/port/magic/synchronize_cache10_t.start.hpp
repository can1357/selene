#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYNCHRONIZE_CACHE10.OperationCode", operation_code, 0x0, 0x8, true, 0xe7499f6fdfa2efa8)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYNCHRONIZE_CACHE10.RelAddr", rel_addr, 0x8, 0x1, true, 0xe523c3a17586ecaf, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYNCHRONIZE_CACHE10.Immediate", immediate, 0x9, 0x1, true, 0x82243ef4beefcae9, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SYNCHRONIZE_CACHE10.Lun", lun, 0xd, 0x3, true, 0x5f722b53a417bc5, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SYNCHRONIZE_CACHE10.LogicalBlockAddress", logical_block_address, 0x10, 0x20, true, 0xd5900f2d230d9b07)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SYNCHRONIZE_CACHE10.BlockCount", block_count, 0x38, 0x10, true, 0x80e595751d3de2c4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYNCHRONIZE_CACHE10.Control", control, 0x48, 0x8, true, 0xef02f0ccc9798e5c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif