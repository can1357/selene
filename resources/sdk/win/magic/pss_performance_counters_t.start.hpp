#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.TotalCycleCount", total_cycle_count, 0x0, 0x40, true, 0x422390c8007b56bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.TotalWallClockPeriod", total_wall_clock_period, 0x40, 0x40, true, 0xd03fab4c34383a08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.VaCloneCycleCount", va_clone_cycle_count, 0x80, 0x40, true, 0x957260ff65d016c1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.VaCloneWallClockPeriod", va_clone_wall_clock_period, 0xc0, 0x40, true, 0x850786be4aba01ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.VaSpaceCycleCount", va_space_cycle_count, 0x100, 0x40, true, 0x712449170c8d5728)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.VaSpaceWallClockPeriod", va_space_wall_clock_period, 0x140, 0x40, true, 0x1d9ce0f414e9c9e2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.AuxPagesCycleCount", aux_pages_cycle_count, 0x180, 0x40, true, 0x2804794255b737c6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.AuxPagesWallClockPeriod", aux_pages_wall_clock_period, 0x1c0, 0x40, true, 0x953387b6ce557be2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.HandlesCycleCount", handles_cycle_count, 0x200, 0x40, true, 0x9d7f1ff695b70dd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.HandlesWallClockPeriod", handles_wall_clock_period, 0x240, 0x40, true, 0x70b1daa41249b18a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.ThreadsCycleCount", threads_cycle_count, 0x280, 0x40, true, 0x21d379dd1eb2c04c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PERFORMANCE_COUNTERS.ThreadsWallClockPeriod", threads_wall_clock_period, 0x2c0, 0x40, true, 0xc44d7eaac179a632)
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
#define _m11
#endif