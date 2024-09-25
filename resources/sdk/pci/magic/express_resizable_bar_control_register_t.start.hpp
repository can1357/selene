#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.BarIndex", bar_index, 0x0, 0x3, true, 0xcd570429df37344b, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.Rsvd", rsvd, 0x3, 0x2, true, 0x20ef15ca6b05fa24, 2, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.NumberOfResizableBars", number_of_resizable_bars, 0x5, 0x3, true, 0x624254a505bd62fc, 3, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.BarSize", bar_size, 0x8, 0x5, true, 0x967da3a2ed2a93ae, 0, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint19_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.Rsvd2", rsvd2, 0xd, 0x13, true, 0x49d59dd2febbc40c, 0, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x728f7646192a7941)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif