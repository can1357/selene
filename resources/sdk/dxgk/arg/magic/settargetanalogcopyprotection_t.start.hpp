#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETANALOGCOPYPROTECTION.TargetId", target_id, 0x0, 0x20, true, 0x54c5721d28b8328b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_vidpn_present_path_copyprotection_type_t ), "_DXGKARG_SETTARGETANALOGCOPYPROTECTION.CopyProtectionType", copy_protection_type, 0x20, 0x20, true, 0x483b25543810b012)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETANALOGCOPYPROTECTION.APSTriggerBits", aps_trigger_bits, 0x40, 0x20, true, 0x84062441099cb7b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_copyprotection_support_t), "_DXGKARG_SETTARGETANALOGCOPYPROTECTION.CopyProtectionSupport", copy_protection_support, 0x60, 0x20, true, 0x47fb3cba6eb3823b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif