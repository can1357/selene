#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUPLICATE_EXTENTS_DATA_EX.Size", size, 0x0, 0x40, true, 0x8bdf84f169b3bd1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUPLICATE_EXTENTS_DATA_EX.FileHandle", file_handle, 0x40, 0x40, true, 0x1697d898a059359b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX.SourceFileOffset", source_file_offset, 0x80, 0x40, true, 0x17c4ec54f564b30e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX.TargetFileOffset", target_file_offset, 0xc0, 0x40, true, 0x6a96ac8182bc7134)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX.ByteCount", byte_count, 0x100, 0x40, true, 0x9139fc8845ef98db)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUPLICATE_EXTENTS_DATA_EX.Flags", flags, 0x140, 0x20, true, 0x377860572331e4da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif