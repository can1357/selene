#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_PROCESS_ID_INFORMATION.ProcessId", process_id, 0x0, 0x40, true, 0xba98ed721d6a5192)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_PROCESS_ID_INFORMATION.ImageName", image_name, 0x40, 0x80, true, 0xacec453fabf40933)
#else
#define _m00
#define _m01
#endif