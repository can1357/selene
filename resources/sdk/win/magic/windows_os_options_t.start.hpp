#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WINDOWS_OS_OPTIONS.Signature", signature, 0x0, 0x40, true, 0x88517e11259bce3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WINDOWS_OS_OPTIONS.Version", version, 0x40, 0x20, true, 0x3e4b35d58d6f8700)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WINDOWS_OS_OPTIONS.Length", length, 0x60, 0x20, true, 0x40d8655d4bb7b611)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WINDOWS_OS_OPTIONS.OsLoadPathOffset", os_load_path_offset, 0x80, 0x20, true, 0x2232109904b27708)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WINDOWS_OS_OPTIONS.OsLoadOptions", os_load_options, 0xa0, 0x10, true, 0x895cf82f2cfe46ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif