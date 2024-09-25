#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.Flags", flags, 0x0, 0x20, true, 0x2879b7b89267654d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.LogContainerCountMax", log_container_count_max, 0x20, 0x20, true, 0xecfc3a499ff4870)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.LogContainerCountMin", log_container_count_min, 0x40, 0x20, true, 0x9677733cd041397d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.LogContainerCount", log_container_count, 0x60, 0x20, true, 0x3e5993e44a59ad9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.LogGrowthIncrement", log_growth_increment, 0x80, 0x20, true, 0xffef38bc56920127)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_MODIFY_RM.LogAutoShrinkPercentage", log_auto_shrink_percentage, 0xa0, 0x20, true, 0x21cec46a2849f772)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_MODIFY_RM.LoggingMode", logging_mode, 0x100, 0x10, true, 0xa37b998f164d4f95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif