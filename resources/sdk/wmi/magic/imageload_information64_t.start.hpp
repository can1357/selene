#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGELOAD_INFORMATION64.ImageBase64", image_base64, 0x0, 0x40, true, 0x8724a7ae5e88412c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGELOAD_INFORMATION64.ImageSize64", image_size64, 0x40, 0x40, true, 0xaa928b317d350971)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION64.ProcessId", process_id, 0x80, 0x20, true, 0x6f0b42b61af9d44f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION64.ImageChecksum", image_checksum, 0xa0, 0x20, true, 0x408725a3486cbb7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION64.TimeDateStamp", time_date_stamp, 0xc0, 0x20, true, 0xb450a28e53d13c79)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION64.SignatureLevel", signature_level, 0xe0, 0x8, true, 0xe2a81de5c0e942f1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION64.SignatureType", signature_type, 0xe8, 0x8, true, 0x5adbc9c341d973c9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGELOAD_INFORMATION64.DefaultBase64", default_base64, 0x100, 0x40, true, 0x85d50ecf74553d75)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGELOAD_INFORMATION64.FileName", file_name, 0x1c0, 0x10, true, 0x6565f81dc68d95ff)
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