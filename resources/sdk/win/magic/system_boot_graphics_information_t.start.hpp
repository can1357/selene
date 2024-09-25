#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.FrameBuffer", frame_buffer, 0x0, 0x40, true, 0xaa8d1bc35043ea6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.Width", width, 0x40, 0x20, true, 0x200a1a113a33dd19)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.Height", height, 0x60, 0x20, true, 0x27aa7e2ac535e423)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.PixelStride", pixel_stride, 0x80, 0x20, true, 0x81f8dfb6f7d2d2c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.Flags", flags, 0xa0, 0x20, true, 0x7c0470195fc18382)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::system_pixel_format_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.Format", format, 0xc0, 0x20, true, 0x9abdeac2e4e96cc3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_GRAPHICS_INFORMATION.DisplayRotation", display_rotation, 0xe0, 0x20, true, 0x8241ef627ae126e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif