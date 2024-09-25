#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::output_color_encoding_t), "_OUTPUT_WIRE_FORMAT.ColorEncoding", color_encoding, 0x0, 0x20, true, 0xfc9676612f401fc4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OUTPUT_WIRE_FORMAT.BitsPerPixel", bits_per_pixel, 0x20, 0x20, true, 0x521cada3f982c98a)
#else
#define _m00
#define _m01
#endif