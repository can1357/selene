#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.CfgURCpl", cfg_ur_cpl, 0x0, 0x1, true, 0x34d55d175fdd6cd4, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.CfgCACpl", cfg_ca_cpl, 0x1, 0x1, true, 0x170f47b0469d2f7f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.CfgCTO", cfg_cto, 0x2, 0x1, true, 0xe6fb862e8cf7e66c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.IoURCpl", io_ur_cpl, 0x8, 0x1, true, 0x3d54ece6c2c2aedc, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.IoCACpl", io_ca_cpl, 0x9, 0x1, true, 0x4e154f474e82f1e4, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.IoCTO", io_cto, 0xa, 0x1, true, 0x32263e3af532acf, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.MemURCpl", mem_ur_cpl, 0x10, 0x1, true, 0x8fe805cf953f4355, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.MemCACpl", mem_ca_cpl, 0x11, 0x1, true, 0xe1b13a01cc8b6388, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.MemCTO", mem_cto, 0x12, 0x1, true, 0x7bc0e257f9571b7e, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DPC_RP_PIO_EXCEPTION_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x35614cc3d603b718)
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