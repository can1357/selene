#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.Enable", enable, 0x0, 0x1, true, 0x7f75b903e954545d, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.RootSelect", root_select, 0x1, 0x1, true, 0x5f46cc5bcf2df508, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.Rsvd", rsvd, 0x2, 0x6, true, 0x5f63b1578d2d6063, 6, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.EffectiveGranularity", effective_granularity, 0x8, 0x8, true, 0x14ddca1867855586, 8, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.Rsvd2", rsvd2, 0x10, 0x10, true, 0xe24f1659cdf36bb4, 16, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_PTM_CONTROL_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x731784ad01c669f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif