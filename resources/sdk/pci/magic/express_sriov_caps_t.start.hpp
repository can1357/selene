#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CAPS.VFMigrationCapable", vf_migration_capable, 0x0, 0x1, true, 0x285a252dbce00273, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PCI_EXPRESS_SRIOV_CAPS.VFMigrationInterruptNumber", vf_migration_interrupt_number, 0x15, 0xb, true, 0xab86564e2f38ff2a, 11, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SRIOV_CAPS.AsULONG", as_ulong, 0x0, 0x20, true, 0xc560b20c918ca8e0)
#else
#define _m00
#define _m01
#define _m02
#endif