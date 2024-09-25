#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_POSITION.Operation", operation, 0x0, 0x8, true, 0xcaf5e679d455424e)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_POSITION.BlockType", block_type, 0x8, 0x1, true, 0x41f68b99a1b9dfb0, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_POSITION.Lun", lun, 0xd, 0x3, true, 0xe9192d1b4b424041, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_POSITION.Control", control, 0x48, 0x8, true, 0xc7cdb10ba32a2c35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif