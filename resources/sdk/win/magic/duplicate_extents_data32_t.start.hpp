#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUPLICATE_EXTENTS_DATA32.FileHandle", file_handle, 0x0, 0x20, true, 0x91cb9caebd39f381)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA32.SourceFileOffset", source_file_offset, 0x40, 0x40, true, 0xc37745cf1e11122d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA32.TargetFileOffset", target_file_offset, 0x80, 0x40, true, 0x7627244a08d915d1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA32.ByteCount", byte_count, 0xc0, 0x40, true, 0x5afcbb8b69c82ac6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif