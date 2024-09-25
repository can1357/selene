#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REARRANGE_FILE_DATA.SourceStartingOffset", source_starting_offset, 0x0, 0x40, true, 0x327ea6ccb7f5959b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REARRANGE_FILE_DATA.TargetOffset", target_offset, 0x40, 0x40, true, 0xd41615a4b9faca8e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_REARRANGE_FILE_DATA.SourceFileHandle", source_file_handle, 0x80, 0x40, true, 0xa779ba8dcb5ff853)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REARRANGE_FILE_DATA.Length", length, 0xc0, 0x20, true, 0x3975e27c40d83da6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REARRANGE_FILE_DATA.Flags", flags, 0xe0, 0x20, true, 0xa3d775d27caa330f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif