#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.Size", size, 0x0, 0x40, true, 0x6aab43d12291a779)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::process_basic_information_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.BasicInfo", basic_info, 0x40, 0x80, true, 0xb6bdb72fd4147398)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.Flags", flags, 0x1c0, 0x20, true, 0xef502cb2c8691ff0)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsProtectedProcess", is_protected_process, 0x1c0, 0x1, true, 0x9c3ce25d52391b2e, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsWow64Process", is_wow64_process, 0x1c1, 0x1, true, 0x3afdca5ad8d28187, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsProcessDeleting", is_process_deleting, 0x1c2, 0x1, true, 0x1c307c07464575e5, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsCrossSessionCreate", is_cross_session_create, 0x1c3, 0x1, true, 0xaa05bd944249ed57, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsFrozen", is_frozen, 0x1c4, 0x1, true, 0x61d268e44a63d64, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsBackground", is_background, 0x1c5, 0x1, true, 0xf707adde189d24e4, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsStronglyNamed", is_strongly_named, 0x1c6, 0x1, true, 0x67f14840be0a6b72, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsSecureProcess", is_secure_process, 0x1c7, 0x1, true, 0x697145e37aee0e7d, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsSubsystemProcess", is_subsystem_process, 0x1c8, 0x1, true, 0xa351266395abf185, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_EXTENDED_BASIC_INFORMATION.IsPicoProcess", is_pico_process, 0x1c8, 0x1, true, 0xe88ee2f0f64f8b1a, 1, uint32_t)
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
#define _m10
#define _m11
#define _m12
#endif