#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_EXTRA_IMAGE_INFORMATION.SizeOfHeaders", size_of_headers, 0x0, 0x20, true, 0xdbb019ed1b71a1cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_EXTRA_IMAGE_INFORMATION.SizeOfImage", size_of_image, 0x20, 0x20, true, 0x15b27493a1ffa4ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_EXTRA_IMAGE_INFORMATION.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0xf66854b1d263ed46)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetShadowStacksReady", image_cet_shadow_stacks_ready, 0x60, 0x1, true, 0x73dd0a910e291bf8, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetShadowStacksStrictMode", image_cet_shadow_stacks_strict_mode, 0x61, 0x1, true, 0xb9d41a98eafdb1ed, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetSetContextIpValidationRelaxedMode", image_cet_set_context_ip_validation_relaxed_mode, 0x62, 0x1, true, 0xe19d7aa73b833646, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetDynamicApisAllowInProc", image_cet_dynamic_apis_allow_in_proc, 0x63, 0x1, true, 0x241682d577eac22a, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetDowngradeReserved1", image_cet_downgrade_reserved1, 0x64, 0x1, true, 0x8e04baad7112e2dd, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_EXTRA_IMAGE_INFORMATION.ImageCetDowngradeReserved2", image_cet_downgrade_reserved2, 0x65, 0x1, true, 0x30aeb9debc05ecc8, 1, uint32_t)
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
#endif