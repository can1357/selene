#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_LOAD_FONT_INFORMATION.WidthInPixels", width_in_pixels, 0x0, 0x10, true, 0x1762d8e739384b8b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_LOAD_FONT_INFORMATION.HeightInPixels", height_in_pixels, 0x10, 0x10, true, 0x615d862ba6cbb8f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_LOAD_FONT_INFORMATION.FontSize", font_size, 0x20, 0x20, true, 0xfb04b81373c06ef6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_VIDEO_LOAD_FONT_INFORMATION.Font", font, 0x40, 0x8, true, 0x7be562dcc48766c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif