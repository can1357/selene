#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT.ExtentCount", extent_count, 0x0, 0x20, true, 0x2092aa633df6ba4f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT.TotalExtentCount", total_extent_count, 0x20, 0x20, true, 0xa398ca07e5849e78)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT.Extents", extents, 0x40, 0x8, true, 0x71aaa30016c59eef)
#else
#define _m00
#define _m01
#define _m02
#endif