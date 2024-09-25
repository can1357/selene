#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_MODE_INFORMATION.Height", height, 0x0, 0x0, false, 0xa153b433eba09cee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_MODE_INFORMATION.Width", width, 0x0, 0x0, false, 0x1e9d67aa0695abd1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INBV_MODE_INFORMATION.Stride", stride, 0x0, 0x0, false, 0xc8df309014aa4935)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::inbv_pixel_format_t), "_INBV_MODE_INFORMATION.PixelFormat", pixel_format, 0x0, 0x0, false, 0x6a70e31ecabab871)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif