#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_CONTROL_REGISTER.Enable", enable, 0x0, 0x1, true, 0x4d4440b2c362ace, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PRI_CONTROL_REGISTER.Reset", reset, 0x1, 0x1, true, 0x24bc5839dd41af68, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_PCI_EXPRESS_PRI_CONTROL_REGISTER.Rsvd", rsvd, 0x2, 0xe, true, 0x475f05c89d2bc86a, 14, uint16_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PRI_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xa3afd5f5f860812d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif