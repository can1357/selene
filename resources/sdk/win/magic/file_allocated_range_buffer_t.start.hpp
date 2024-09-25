#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ALLOCATED_RANGE_BUFFER.FileOffset", file_offset, 0x0, 0x40, true, 0x39421f1ea351c473)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ALLOCATED_RANGE_BUFFER.Length", length, 0x40, 0x40, true, 0x102155c735b8c6ef)
#else
#define _m00
#define _m01
#endif