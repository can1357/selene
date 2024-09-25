#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_image_information_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.SectionInformation", section_information, 0x0, 0x0, true, 0x14ca8cad34454906)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ExtendedFlags", extended_flags, 0x200, 0x20, true, 0x2e1d749dc4e249bf)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageExportSuppressionEnabled", image_export_suppression_enabled, 0x200, 0x1, true, 0x8ff4dbbc20772c83, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetShadowStacksReady", image_cet_shadow_stacks_ready, 0x201, 0x1, true, 0x5e359308463eeb81, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageXfgEnabled", image_xfg_enabled, 0x202, 0x1, true, 0xfe90d60b2fada7e6, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetShadowStacksStrictMode", image_cet_shadow_stacks_strict_mode, 0x203, 0x1, true, 0x6f98f52200f3392b, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetSetContextIpValidationRelaxedMode", image_cet_set_context_ip_validation_relaxed_mode, 0x204, 0x1, true, 0x535e7a7086003a79, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetDynamicApisAllowInProc", image_cet_dynamic_apis_allow_in_proc, 0x205, 0x1, true, 0x4d0e0d9162d12c7a, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetDowngradeReserved1", image_cet_downgrade_reserved1, 0x206, 0x1, true, 0x5020c8a4a8b26d36, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECTION_INTERNAL_IMAGE_INFORMATION.ImageCetDowngradeReserved2", image_cet_downgrade_reserved2, 0x207, 0x1, true, 0xff25063a1b00b9fc, 1, uint32_t)
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