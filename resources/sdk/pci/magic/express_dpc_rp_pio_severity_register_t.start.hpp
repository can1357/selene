#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.CfgURCpl", cfg_ur_cpl, 0x0, 0x1, true, 0x42e6f160564d64a3, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.CfgCACpl", cfg_ca_cpl, 0x1, 0x1, true, 0x18514dffd02cfe4f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.CfgCTO", cfg_cto, 0x2, 0x1, true, 0xda4b4cc8b43510b9, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.IoURCpl", io_ur_cpl, 0x8, 0x1, true, 0x13c5b3fbdb560129, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.IoCACpl", io_ca_cpl, 0x9, 0x1, true, 0x76a8584642819fc0, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.IoCTO", io_cto, 0xa, 0x1, true, 0x43e10d1915f35cf9, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.MemURCpl", mem_ur_cpl, 0x10, 0x1, true, 0xdeab406f98b6ca33, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.MemCACpl", mem_ca_cpl, 0x11, 0x1, true, 0x14b5bfaf43ab2ec1, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.MemCTO", mem_cto, 0x12, 0x1, true, 0x681aa54fe01fe453, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DPC_RP_PIO_SEVERITY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xf4330143ada460e3)
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