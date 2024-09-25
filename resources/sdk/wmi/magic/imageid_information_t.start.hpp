#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_IMAGEID_INFORMATION.ImageBase", image_base, 0x0, 0x40, true, 0xa2bd78108d1b8f31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_IMAGEID_INFORMATION.ImageSize", image_size, 0x40, 0x40, true, 0x85922f0090305130)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION.ProcessId", process_id, 0x80, 0x20, true, 0xb9aa8fc8b2b64b09)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION.TimeDateStamp", time_date_stamp, 0xa0, 0x20, true, 0xc24817201041af4b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGEID_INFORMATION.OriginalFileName", original_file_name, 0xc0, 0x10, true, 0x34c59b793a86f4ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif