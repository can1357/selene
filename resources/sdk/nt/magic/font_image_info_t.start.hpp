#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_FONT_IMAGE_INFO.FontSize", font_size, 0x0, 0x20, true, 0xe8c02979f62472c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_FONT_IMAGE_INFO.ImageBits", image_bits, 0x40, 0x40, true, 0xb4f904e629fd49a2)
#else
#define _m00
#define _m01
#endif