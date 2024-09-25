#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::module_basic_info_t), "_RTL_MODULE_EXTENDED_INFO.BasicInfo", basic_info, 0x0, 0x40, true, 0xae410cc3a195df89)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_MODULE_EXTENDED_INFO.ImageSize", image_size, 0x40, 0x20, true, 0xb14129ba61ec0c87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_MODULE_EXTENDED_INFO.FileNameOffset", file_name_offset, 0x60, 0x10, true, 0x39970210bbed21c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_RTL_MODULE_EXTENDED_INFO.FullPathName", full_path_name, 0x70, 0x0, true, 0xacb84991d7045fc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif