#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_QUERYFSEFLAGS.Blocked", blocked, 0x0, 0x1, true, 0x9a21078d27eae408, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYFSEFLAGS.Value", value, 0x0, 0x20, true, 0x7f98fc4ba3847509)
#else
#define _m00
#define _m01
#endif