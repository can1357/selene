#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_TIMESTAMPS.CreationTime", creation_time, 0x0, 0x40, true, 0xd3224ea2f8fc3f0a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_TIMESTAMPS.LastAccessTime", last_access_time, 0x40, 0x40, true, 0x10102ef525a58364)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_TIMESTAMPS.LastWriteTime", last_write_time, 0x80, 0x40, true, 0x671478292f295275)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_TIMESTAMPS.ChangeTime", change_time, 0xc0, 0x40, true, 0x8c894c55a8a9872e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif