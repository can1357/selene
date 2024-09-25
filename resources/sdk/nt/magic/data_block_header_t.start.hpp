#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DATA_BLOCK_HEADER.DataMode", data_mode, 0x0, 0x8, true, 0xf2b1d823054bfa92)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DATA_BLOCK_HEADER.LogicalBlockAddress", logical_block_address, 0x28, 0x20, true, 0xc3ad95ba9898a638)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DATA_BLOCK_HEADER.MSF.M", m, 0x8, 0x8, true, 0x2a3491a70d363c0e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DATA_BLOCK_HEADER.MSF.S", s, 0x10, 0x8, true, 0xde15c33348787ad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DATA_BLOCK_HEADER.MSF.F", f, 0x18, 0x8, true, 0x507023032400f1a3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_msf_t), "_DATA_BLOCK_HEADER.MSF", msf, 0x28, 0x20, true, 0x340189b433bc62a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif