#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xe0457dc6a2124b80)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_START_RM_INFORMATION.LogContainerSize", log_container_size, 0x40, 0x40, true, 0xd950185a9cd0460d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.LogContainerCountMin", log_container_count_min, 0x80, 0x20, true, 0x1bd3c6a24d60be1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.LogContainerCountMax", log_container_count_max, 0xa0, 0x20, true, 0x7b15f1a49834ea87)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.LogGrowthIncrement", log_growth_increment, 0xc0, 0x20, true, 0x65bfc17b30f12827)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.LogAutoShrinkPercentage", log_auto_shrink_percentage, 0xe0, 0x20, true, 0x9f45008b6f520386)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_START_RM_INFORMATION.TmLogPathOffset", tm_log_path_offset, 0x100, 0x20, true, 0x23aacf2b333b6a0b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_START_RM_INFORMATION.TmLogPathLength", tm_log_path_length, 0x120, 0x10, true, 0x89a7e7a8db3e950d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_START_RM_INFORMATION.LoggingMode", logging_mode, 0x130, 0x10, true, 0x1d62ba165da38593)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_START_RM_INFORMATION.LogPathLength", log_path_length, 0x140, 0x10, true, 0xd1e5b41c346545ab)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_TXFS_START_RM_INFORMATION.LogPath", log_path, 0x160, 0x10, true, 0x2ad6d33c6f31d16b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif