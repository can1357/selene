#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DEVICE_STATUS_2_REGISTER.Rsvd", rsvd, 0x0, 0x10, true, 0xde12fa07f806c30e, 16, uint16_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_DEVICE_STATUS_2_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x57792c3326e39449)
#else
#define _m00
#define _m01
#endif