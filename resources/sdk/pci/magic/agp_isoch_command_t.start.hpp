#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_AGP_ISOCH_COMMAND.Rsvd1", rsvd1, 0x0, 0x6, true, 0x2c0a430905fcba0c, 6, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_AGP_ISOCH_COMMAND.Isoch_Y", isoch_y, 0x6, 0x2, true, 0xafff6e1237b7498c, 2, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_ISOCH_COMMAND.Isoch_N", isoch_n, 0x8, 0x8, true, 0x830522f22bb48510, 8, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#endif