#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_LOGO_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x97168ec64024a863)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BOOT_LOGO_INFORMATION.BitmapOffset", bitmap_offset, 0x20, 0x20, true, 0x7747e497f5874a7c)
#else
#define _m00
#define _m01
#endif