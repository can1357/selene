#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kaux::module_basic_info_t), "_AUX_MODULE_EXTENDED_INFO.BasicInfo", basic_info, 0x0, 0x40, true, 0x60e4e4f778ffbb68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_MODULE_EXTENDED_INFO.ImageSize", image_size, 0x40, 0x20, true, 0x4ba72f43f4069fa6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AUX_MODULE_EXTENDED_INFO.FileNameOffset", file_name_offset, 0x60, 0x10, true, 0x226d8b2c6f3901aa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_AUX_MODULE_EXTENDED_INFO.FullPathName", full_path_name, 0x70, 0x0, true, 0xcfbff6a0ce3c63f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif