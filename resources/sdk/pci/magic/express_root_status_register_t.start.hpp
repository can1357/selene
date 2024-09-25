#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_ROOT_STATUS_REGISTER.PMERequestorId", pme_requestor_id, 0x0, 0x10, true, 0x9d631c2cd08d10b5, 16, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_STATUS_REGISTER.PMEStatus", pme_status, 0x10, 0x1, true, 0xed8713067ddd737e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_ROOT_STATUS_REGISTER.PMEPending", pme_pending, 0x11, 0x1, true, 0x513eed23475e24ec, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_PCI_EXPRESS_ROOT_STATUS_REGISTER.Rsvd", rsvd, 0x12, 0xe, true, 0x8ec477004c65a2f0, 14, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_ROOT_STATUS_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x91b52118c34a6af3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif