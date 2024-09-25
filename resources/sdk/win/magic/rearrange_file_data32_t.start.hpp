#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REARRANGE_FILE_DATA32.SourceStartingOffset", source_starting_offset, 0x0, 0x40, true, 0xafdac9ad22f72b30)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REARRANGE_FILE_DATA32.TargetOffset", target_offset, 0x40, 0x40, true, 0x5786fa99eefa05fc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REARRANGE_FILE_DATA32.SourceFileHandle", source_file_handle, 0x80, 0x20, true, 0xd492df37bbb946f1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REARRANGE_FILE_DATA32.Length", length, 0xa0, 0x20, true, 0xea49df84c70bdf0f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REARRANGE_FILE_DATA32.Flags", flags, 0xc0, 0x20, true, 0x2abd2b987bec1a1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif