#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.CfgURCpl", cfg_ur_cpl, 0x0, 0x1, true, 0xce990d0d4ce2cd1b, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.CfgCACpl", cfg_ca_cpl, 0x1, 0x1, true, 0xa5a274e34b5c6c50, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.CfgCTO", cfg_cto, 0x2, 0x1, true, 0xd5dd859b12b69a2d, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.IoURCpl", io_ur_cpl, 0x8, 0x1, true, 0xac112f8d40e98a70, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.IoCACpl", io_ca_cpl, 0x9, 0x1, true, 0x87991c32dc194d03, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.IoCTO", io_cto, 0xa, 0x1, true, 0x80b2b132d31a618a, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.MemURCpl", mem_ur_cpl, 0x10, 0x1, true, 0x376bf7f00ad0d61a, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.MemCACpl", mem_ca_cpl, 0x11, 0x1, true, 0x9fe88871d0004bc2, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.MemCTO", mem_cto, 0x12, 0x1, true, 0x84c50c46749e7491, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_DPC_RP_PIO_MASK_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x815fe60399089111)
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