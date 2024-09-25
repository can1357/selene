#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_CODEINTEGRITYVERIFICATION_INFORMATION.FileHandle", file_handle, 0x0, 0x40, true, 0xefc7aa995e5b4b73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITYVERIFICATION_INFORMATION.ImageSize", image_size, 0x40, 0x20, true, 0x4fb9b0b034fab8da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_CODEINTEGRITYVERIFICATION_INFORMATION.Image", image, 0x80, 0x40, true, 0x50178e8fae20dd07)
#else
#define _m00
#define _m01
#define _m02
#endif