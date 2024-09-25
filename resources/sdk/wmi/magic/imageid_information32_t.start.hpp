#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION32.ImageBase32", image_base32, 0x0, 0x20, true, 0x9105f378c9bad304)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION32.ImageSize32", image_size32, 0x20, 0x20, true, 0x259a7e50a1d0fa26)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION32.ProcessId", process_id, 0x40, 0x20, true, 0xc1ac6df0b56c66a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_IMAGEID_INFORMATION32.TimeDateStamp", time_date_stamp, 0x60, 0x20, true, 0x2b958b8a4a9c24af)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_IMAGEID_INFORMATION32.OriginalFileName", original_file_name, 0x80, 0x10, true, 0xd36259096ca35405)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif