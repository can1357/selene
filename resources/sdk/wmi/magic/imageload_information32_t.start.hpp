#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.ImageBase32", image_base32, 0x0, 0x20, true, 0x114536454d62b3f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.ImageSize32", image_size32, 0x20, 0x20, true, 0xaee7fb3bf22c7385)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.ProcessId", process_id, 0x40, 0x20, true, 0xb7cb6e22c3ec1cd8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.ImageChecksum", image_checksum, 0x60, 0x20, true, 0x16efe6cfe0932cac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.TimeDateStamp", time_date_stamp, 0x80, 0x20, true, 0xbc73afd5fcfe2057)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION32.SignatureLevel", signature_level, 0xa0, 0x8, true, 0x15a6e93ca6f290c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION32.SignatureType", signature_type, 0xa8, 0x8, true, 0x433a17cc1ba69801)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION32.DefaultBase32", default_base32, 0xc0, 0x20, true, 0xeb25220d49106c9b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGELOAD_INFORMATION32.FileName", file_name, 0x160, 0x10, true, 0x6baca3d6937ddfb4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif