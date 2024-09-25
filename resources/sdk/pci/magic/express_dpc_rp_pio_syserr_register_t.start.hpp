#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.CfgURCpl", cfg_ur_cpl, 0x0, 0x1, true, 0x31e94f301382d97, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.CfgCACpl", cfg_ca_cpl, 0x1, 0x1, true, 0xdd68178ae4f158d6, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.CfgCTO", cfg_cto, 0x2, 0x1, true, 0x5d148c2486428fc0, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.IoURCpl", io_ur_cpl, 0x8, 0x1, true, 0x2ccc4e013d7e6818, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.IoCACpl", io_ca_cpl, 0x9, 0x1, true, 0xf56e17c9a7060fb, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.IoCTO", io_cto, 0xa, 0x1, true, 0x6fdfafbefcfd3a17, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.MemURCpl", mem_ur_cpl, 0x10, 0x1, true, 0xd310585905210475, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.MemCACpl", mem_ca_cpl, 0x11, 0x1, true, 0xee6387906e427359, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.MemCTO", mem_cto, 0x12, 0x1, true, 0x7f291a754d12278, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0xb573fb126133e59a)
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