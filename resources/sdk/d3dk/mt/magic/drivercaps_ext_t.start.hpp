#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_DRIVERCAPS_EXT.VirtualModeSupport", virtual_mode_support, 0x0, 0x1, true, 0x5341e7850304ec02, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DRIVERCAPS_EXT.Value", value, 0x0, 0x20, true, 0xa42fa1c63b6757db)
#else
#define _m00
#define _m01
#endif