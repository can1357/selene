#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "MOVE_FILE_DATA.FileHandle", file_handle, 0x0, 0x40, true, 0xe2a96fda07797645)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MOVE_FILE_DATA.StartingVcn", starting_vcn, 0x40, 0x40, true, 0xe3eb0bcce4cae423)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MOVE_FILE_DATA.StartingLcn", starting_lcn, 0x80, 0x40, true, 0x94b17bc759ffd530)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MOVE_FILE_DATA.ClusterCount", cluster_count, 0xc0, 0x20, true, 0x640619da444d5aa2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif