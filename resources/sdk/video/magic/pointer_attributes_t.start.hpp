#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_ATTRIBUTES.Flags", flags, 0x0, 0x20, true, 0x5169583e653a6a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_ATTRIBUTES.Width", width, 0x20, 0x20, true, 0x44325891279b3838)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_ATTRIBUTES.Height", height, 0x40, 0x20, true, 0x4aeb3e3422dc3073)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_ATTRIBUTES.WidthInBytes", width_in_bytes, 0x60, 0x20, true, 0x5d75d758c3316377)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POINTER_ATTRIBUTES.Enable", enable, 0x80, 0x20, true, 0x8c5cbcff51af71f6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_POINTER_ATTRIBUTES.Column", column, 0xa0, 0x10, true, 0x595fdcfa30d591fb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_POINTER_ATTRIBUTES.Row", row, 0xb0, 0x10, true, 0x1eec974f9ddce033)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_VIDEO_POINTER_ATTRIBUTES.Pixels", pixels, 0xc0, 0x8, true, 0x7875ee8f2705271c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif