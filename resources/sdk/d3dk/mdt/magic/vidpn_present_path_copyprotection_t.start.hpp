#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_vidpn_present_path_copyprotection_type_t ), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION.CopyProtectionType", copy_protection_type, 0x0, 0x20, true, 0xee399ec12028e9f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION.APSTriggerBits", aps_trigger_bits, 0x20, 0x20, true, 0xcf10a1b3375eb965)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION.OEMCopyProtection", oem_copy_protection, 0x40, 0x0, true, 0x6c3517a1be7b3a79)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_copyprotection_support_t), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION.CopyProtectionSupport", copy_protection_support, 0x840, 0x20, true, 0x54964a3a065f6851)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif