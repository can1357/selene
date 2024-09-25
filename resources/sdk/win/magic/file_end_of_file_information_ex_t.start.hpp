#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_END_OF_FILE_INFORMATION_EX.EndOfFile", end_of_file, 0x0, 0x40, true, 0x21127950b157eb7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_END_OF_FILE_INFORMATION_EX.PagingFileSizeInMM", paging_file_size_in_mm, 0x40, 0x40, true, 0x10f1f354fbc6bc45)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_END_OF_FILE_INFORMATION_EX.PagingFileMaxSize", paging_file_max_size, 0x80, 0x40, true, 0x7402462ee3752c02)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_END_OF_FILE_INFORMATION_EX.Flags", flags, 0xc0, 0x20, true, 0xfc57da6651f20aec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif