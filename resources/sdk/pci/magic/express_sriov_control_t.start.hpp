#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CONTROL.VFEnable", vf_enable, 0x0, 0x1, true, 0xdff42944a3188d05, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CONTROL.VFMigrationEnable", vf_migration_enable, 0x1, 0x1, true, 0x44d907435afa6fd5, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CONTROL.VFMigrationInterruptEnable", vf_migration_interrupt_enable, 0x2, 0x1, true, 0x8779d700fe4b63d1, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CONTROL.VFMemorySpaceEnable", vf_memory_space_enable, 0x3, 0x1, true, 0xf63d329d186167e7, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SRIOV_CONTROL.ARICapableHierarchy", ari_capable_hierarchy, 0x4, 0x1, true, 0x25dc913a49f33eac, 1, uint16_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SRIOV_CONTROL.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x55faf7418c5329d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif