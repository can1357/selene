#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_USAGEHINTS.Hidden", hidden, 0x0, 0x1, true, 0xed729324a570e5a3, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MONITORLINKINFO_USAGEHINTS.Value", value, 0x0, 0x20, true, 0x4b89e2e4b5af9f64)
#else
#define _m00
#define _m01
#endif