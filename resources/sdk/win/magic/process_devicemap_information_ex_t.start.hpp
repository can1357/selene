#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_DEVICEMAP_INFORMATION_EX.Set.DirectoryHandle", directory_handle, 0x0, 0x40, true, 0x2d795980a17ab27a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_set_t), "_PROCESS_DEVICEMAP_INFORMATION_EX.Set", set, 0x0, 0x40, true, 0xe6c326d6367cdbc0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_DEVICEMAP_INFORMATION_EX.Query.DriveMap", drive_map, 0x0, 0x20, true, 0x340fa4bbaa2e6292)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_PROCESS_DEVICEMAP_INFORMATION_EX.Query.DriveType", drive_type, 0x20, 0x0, true, 0x4832569ffa4f934a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_query_t), "_PROCESS_DEVICEMAP_INFORMATION_EX.Query", query, 0x0, 0x20, true, 0x5ed41f7503ecb85c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_DEVICEMAP_INFORMATION_EX.Flags", flags, 0x140, 0x20, true, 0x388607aba8ef004a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif