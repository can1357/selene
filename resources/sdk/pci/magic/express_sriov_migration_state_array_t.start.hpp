#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY.VFMigrationStateBIR", vf_migration_state_bir, 0x0, 0x3, true, 0x3992d3653d59f42f, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint29_t), "_PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY.VFMigrationStateOffset", vf_migration_state_offset, 0x3, 0x1d, true, 0x21dfaceb058905f3, 29, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SRIOV_MIGRATION_STATE_ARRAY.AsULONG", as_ulong, 0x0, 0x20, true, 0x14a14908a58e190)
#else
#define _m00
#define _m01
#define _m02
#endif