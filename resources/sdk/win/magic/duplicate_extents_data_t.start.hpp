#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUPLICATE_EXTENTS_DATA.FileHandle", file_handle, 0x0, 0x40, true, 0x3fe8ae73d7ce866c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA.SourceFileOffset", source_file_offset, 0x40, 0x40, true, 0xcea15f225ac7434a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA.TargetFileOffset", target_file_offset, 0x80, 0x40, true, 0xd39d7b4d8f8c24cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA.ByteCount", byte_count, 0xc0, 0x40, true, 0xc24bb81be9cdf0f8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif