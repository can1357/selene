#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_SETFSEBLOCKFLAGS.Block", block, 0x0, 0x1, true, 0xb170e096e41bb2ca, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETFSEBLOCKFLAGS.Value", value, 0x0, 0x20, true, 0xf3c93e666640b4f3)
#else
#define _m00
#define _m01
#endif