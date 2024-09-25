#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MOVE_CLUSTER_INFORMATION.ClusterCount", cluster_count, 0x0, 0x20, true, 0xda22073167c7eae7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_MOVE_CLUSTER_INFORMATION.RootDirectory", root_directory, 0x40, 0x40, true, 0xec14b00b3bfbb696)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_MOVE_CLUSTER_INFORMATION.FileNameLength", file_name_length, 0x80, 0x20, true, 0x3b0e75ecc021e786)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_MOVE_CLUSTER_INFORMATION.FileName", file_name, 0xa0, 0x10, true, 0x6c21920cb4e86d1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif