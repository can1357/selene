#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_LARGEPAGE_IMAGE_INFO.LargeImageBias", large_image_bias, 0x0, 0x0, false, 0x2c3adb63583baf00)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_LARGEPAGE_IMAGE_INFO.ActualImageViewSize", actual_image_view_size, 0x0, 0x0, false, 0x7f95f25704a373dc)
#else
#define _m00
#define _m01
#endif