#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_IMAGELOAD_INFORMATION.ImageBase", image_base, 0x0, 0x40, true, 0xf707d228f8cc749b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGELOAD_INFORMATION.ImageSize", image_size, 0x40, 0x40, true, 0xf24eb6d88dc592ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION.ProcessId", process_id, 0x80, 0x20, true, 0xf3e09239baeb3db2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION.ImageChecksum", image_checksum, 0xa0, 0x20, true, 0x7133c6315cd85931)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGELOAD_INFORMATION.TimeDateStamp", time_date_stamp, 0xc0, 0x20, true, 0x8be121d8d73e9f15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION.SignatureLevel", signature_level, 0xe0, 0x8, true, 0xe22e022470044b76)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_IMAGELOAD_INFORMATION.SignatureType", signature_type, 0xe8, 0x8, true, 0xbdb02b706445f7f6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_IMAGELOAD_INFORMATION.DefaultBase", default_base, 0x100, 0x40, true, 0xc3b42eceee4c92b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGELOAD_INFORMATION.FileName", file_name, 0x1c0, 0x10, true, 0x93fa82e54952822b)
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