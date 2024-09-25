#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_NPEM_STATUS_REGISTER.CommandCompleted", command_completed, 0x0, 0x1, true, 0xf1262b5c6347cd94, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint23_t), "_PCI_EXPRESS_NPEM_STATUS_REGISTER.Rsvd", rsvd, 0x1, 0x17, true, 0xa2186820a1e3b7fe, 23, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_NPEM_STATUS_REGISTER.EnclosureSpecificStatus", enclosure_specific_status, 0x18, 0x8, true, 0x5fb9affa6b62384f, 8, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_NPEM_STATUS_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x2fa16c07f035bcfe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif