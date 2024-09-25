#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOVE_FILE_DATA32.FileHandle", file_handle, 0x0, 0x20, true, 0x11963b9a1a02bdba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MOVE_FILE_DATA32.StartingVcn", starting_vcn, 0x40, 0x40, true, 0x58e03faed1aae2bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MOVE_FILE_DATA32.StartingLcn", starting_lcn, 0x80, 0x40, true, 0x184fba6671332b92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MOVE_FILE_DATA32.ClusterCount", cluster_count, 0xc0, 0x20, true, 0xc44bf3e8f558016f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif