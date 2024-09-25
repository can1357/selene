#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LEVEL_TRIM.Key", key, 0x0, 0x20, true, 0xb58c54431dee2b9a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LEVEL_TRIM.NumRanges", num_ranges, 0x20, 0x20, true, 0x4fd79c7788affae0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::file_level_trim_range_t, 1>), "_FILE_LEVEL_TRIM.Ranges", ranges, 0x40, 0x80, true, 0xba85931aed743e6f)
#else
#define _m00
#define _m01
#define _m02
#endif