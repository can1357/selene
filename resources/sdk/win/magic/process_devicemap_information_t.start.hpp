#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_DEVICEMAP_INFORMATION.Set.DirectoryHandle", directory_handle, 0x0, 0x40, true, 0x7e8e4fc1003ab643)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_set_t), "_PROCESS_DEVICEMAP_INFORMATION.Set", set, 0x0, 0x40, true, 0xd2e5fbaade559c95)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_DEVICEMAP_INFORMATION.Query.DriveMap", drive_map, 0x0, 0x20, true, 0xa12a56b78397cd3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_PROCESS_DEVICEMAP_INFORMATION.Query.DriveType", drive_type, 0x20, 0x0, true, 0x119cd47f1312e7ac)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_query_t), "_PROCESS_DEVICEMAP_INFORMATION.Query", query, 0x0, 0x20, true, 0x99b5b4205f89306f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif