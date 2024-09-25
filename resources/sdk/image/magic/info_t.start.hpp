#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_INFO.Properties", properties, 0x0, 0x20, true, 0xbb1580e28f9f5255)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_IMAGE_INFO.ImageAddressingMode", image_addressing_mode, 0x0, 0x8, true, 0x9c07bdaedf21558c, 8, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INFO.SystemModeImage", system_mode_image, 0x8, 0x1, true, 0xc26d10081de804b3, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INFO.ImageMappedToAllPids", image_mapped_to_all_pids, 0x9, 0x1, true, 0x38d5babd8f009654, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INFO.ExtendedInfoPresent", extended_info_present, 0xa, 0x1, true, 0xcc2d25ca2fdabdfa, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INFO.MachineTypeMismatch", machine_type_mismatch, 0xb, 0x1, true, 0x713c0c0a5cd226ad, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IMAGE_INFO.ImageSignatureLevel", image_signature_level, 0xc, 0x4, true, 0x78697a10243a3ac, 4, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_IMAGE_INFO.ImageSignatureType", image_signature_type, 0x10, 0x3, true, 0x89985b22eac377c8, 3, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_INFO.ImagePartialMap", image_partial_map, 0x13, 0x1, true, 0x8958c63da1f4170c, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IMAGE_INFO.ImageBase", image_base, 0x40, 0x40, true, 0x9a7bc0727c2f1a41)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_INFO.ImageSelector", image_selector, 0x80, 0x20, true, 0xc5330d2fc337782a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_INFO.ImageSize", image_size, 0xc0, 0x40, true, 0x6466836dae7fecc4)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_INFO.ImageSectionNumber", image_section_number, 0x100, 0x20, true, 0xd907e8dd48b4563c)
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