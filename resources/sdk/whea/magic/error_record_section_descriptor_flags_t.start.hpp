#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.Primary", primary, 0x0, 0x1, true, 0x4ca4aa0222c842c1, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.ContainmentWarning", containment_warning, 0x1, 0x1, true, 0x54f694c351bbb414, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.Reset", reset, 0x2, 0x1, true, 0x142accd199ba9aba, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.ThresholdExceeded", threshold_exceeded, 0x3, 0x1, true, 0x625ae4abff71be28, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.ResourceNotAvailable", resource_not_available, 0x4, 0x1, true, 0xc3a3f6ace522e92f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.LatentError", latent_error, 0x5, 0x1, true, 0x342844555e259989, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.Propagated", propagated, 0x6, 0x1, true, 0x551affcbe64ed53, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0xa6be535cb08b943f)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.FruTextByPlugin", fru_text_by_plugin, 0x7, 0x1, true, 0x5a3766f6882dd8fb, 1, uint32_t)
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