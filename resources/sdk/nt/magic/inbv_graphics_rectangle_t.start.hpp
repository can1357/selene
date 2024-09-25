#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_GRAPHICS_RECTANGLE.Height", height, 0x0, 0x0, false, 0xad424d34cf7bf59e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_GRAPHICS_RECTANGLE.Width", width, 0x0, 0x0, false, 0x93852e7cb4f7aed3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::inbv_pixel_format_t), "_INBV_GRAPHICS_RECTANGLE.PixelFormat", pixel_format, 0x0, 0x0, false, 0x3a4f925d078eaf63)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_GRAPHICS_RECTANGLE.Size", size, 0x0, 0x0, false, 0x3f22661f2018c513)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_INBV_GRAPHICS_RECTANGLE.Data", data, 0x0, 0x0, false, 0x2f86d143f4badd43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif