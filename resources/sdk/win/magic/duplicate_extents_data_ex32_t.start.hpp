#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUPLICATE_EXTENTS_DATA_EX32.Size", size, 0x0, 0x20, true, 0xcffc31684aeb14c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUPLICATE_EXTENTS_DATA_EX32.FileHandle", file_handle, 0x20, 0x20, true, 0x8212363fa8ebeab4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX32.SourceFileOffset", source_file_offset, 0x40, 0x40, true, 0x5ce75c9dfad7f1c5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX32.TargetFileOffset", target_file_offset, 0x80, 0x40, true, 0x95495cacd35bd328)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DUPLICATE_EXTENTS_DATA_EX32.ByteCount", byte_count, 0xc0, 0x40, true, 0xc3dfa448b0850c88)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUPLICATE_EXTENTS_DATA_EX32.Flags", flags, 0x100, 0x20, true, 0x8a2888b6373419ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif