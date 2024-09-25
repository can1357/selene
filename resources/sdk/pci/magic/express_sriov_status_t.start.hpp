#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_STATUS.VFMigrationStatus", vf_migration_status, 0x0, 0x1, true, 0x2da1e56233676d43, 1, uint16_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_STATUS.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xc58275a80e6d0f15)
#else
#define _m00
#define _m01
#endif