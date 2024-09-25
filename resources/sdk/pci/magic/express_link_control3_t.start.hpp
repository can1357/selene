#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL3.PerformEq", perform_eq, 0x0, 0x1, true, 0xf4d5ed28f3269055, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_LINK_CONTROL3.LinkEqIntEn", link_eq_int_en, 0x1, 0x1, true, 0x2fab6e2a8db69cb, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_LINK_CONTROL3.AsULONG", as_ulong, 0x0, 0x20, true, 0xd5a91ffd889badff)
#else
#define _m00
#define _m01
#define _m02
#endif