#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_DEVICERESET_STATE.DesktopSwitched", desktop_switched, 0x0, 0x1, true, 0x329008aa7d8022c4, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICERESET_STATE.Value", value, 0x0, 0x20, true, 0x782cdb1345780d45)
#else
#define _m00
#define _m01
#endif