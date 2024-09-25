#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.CfgURCpl", cfg_ur_cpl, 0x0, 0x1, true, 0x3213dec5820b86be, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.CfgCACpl", cfg_ca_cpl, 0x1, 0x1, true, 0xa7a255b683caa71d, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.CfgCTO", cfg_cto, 0x2, 0x1, true, 0x1c893da70f3c550c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.IoURCpl", io_ur_cpl, 0x8, 0x1, true, 0x7d025d54c7f73927, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.IoCACpl", io_ca_cpl, 0x9, 0x1, true, 0xf89ea364d4275d96, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.IoCTO", io_cto, 0xa, 0x1, true, 0x19f056e98bbdb85e, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.MemURCpl", mem_ur_cpl, 0x10, 0x1, true, 0xd45b887277b57abc, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.MemCACpl", mem_ca_cpl, 0x11, 0x1, true, 0x9e61383558cf9c7c, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.MemCTO", mem_cto, 0x12, 0x1, true, 0x1231ad4f9d6ca180, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DPC_RP_PIO_STATUS_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xba5cfdae1a231336)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif