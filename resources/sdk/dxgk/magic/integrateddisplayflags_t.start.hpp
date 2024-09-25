#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXGK_INTEGRATEDDISPLAYFLAGS.UndockedOrientation", undocked_orientation, 0x0, 0x2, true, 0x2466532ecd0246b8, 2, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXGK_INTEGRATEDDISPLAYFLAGS.DockedOrientation", docked_orientation, 0x2, 0x2, true, 0xebf7c7f3dbdcbbd5, 2, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_INTEGRATEDDISPLAYFLAGS.Value", value, 0x0, 0x20, true, 0xefac7ec5b8b72b6)
#else
#define _m00
#define _m01
#define _m02
#endif