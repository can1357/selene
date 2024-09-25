#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE.FileOffset", file_offset, 0x0, 0x40, true, 0x81caa03b0c5273a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE.ByteCount", byte_count, 0x40, 0x40, true, 0xaef9fcee6d956e99)
#else
#define _m00
#define _m01
#endif