#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MEMORY_PARTITION_PAGEFILE_INFORMATION.PageFileName", page_file_name, 0x0, 0x80, true, 0xc34e70c069d178c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MEMORY_PARTITION_PAGEFILE_INFORMATION.MinimumSize", minimum_size, 0x80, 0x40, true, 0xb0c1ee6e2d9b649b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MEMORY_PARTITION_PAGEFILE_INFORMATION.MaximumSize", maximum_size, 0xc0, 0x40, true, 0xbd5dcbc2d9a93e53)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_PAGEFILE_INFORMATION.Flags", flags, 0x100, 0x20, true, 0xdaece024423dedc7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif