#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGEID_INFORMATION64.ImageBase64", image_base64, 0x0, 0x40, true, 0x426f3e53a9f9098a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGEID_INFORMATION64.ImageSize64", image_size64, 0x40, 0x40, true, 0x39062c0a0dcaafef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION64.ProcessId", process_id, 0x80, 0x20, true, 0x5566d1957ba8b42a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION64.TimeDateStamp", time_date_stamp, 0xa0, 0x20, true, 0xf6c8c48bedc97673)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGEID_INFORMATION64.OriginalFileName", original_file_name, 0xc0, 0x10, true, 0x51307e1db8b9c02f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif