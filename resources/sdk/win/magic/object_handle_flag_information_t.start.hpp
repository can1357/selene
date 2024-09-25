#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HANDLE_FLAG_INFORMATION.Inherit", inherit, 0x0, 0x8, true, 0x9f056cee1d50d081)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBJECT_HANDLE_FLAG_INFORMATION.ProtectFromClose", protect_from_close, 0x8, 0x8, true, 0x2e58ca9a0822ed9c)
#else
#define _m00
#define _m01
#endif