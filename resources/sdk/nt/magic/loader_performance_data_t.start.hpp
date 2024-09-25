#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.StartTime", start_time, 0x0, 0x40, true, 0xbf0b23afd53b1118)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.EndTime", end_time, 0x40, 0x40, true, 0xcf74920607f9a847)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.PreloadEndTime", preload_end_time, 0x80, 0x40, true, 0x4bbe711081093fe4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.TcbLoaderStartTime", tcb_loader_start_time, 0xc0, 0x40, true, 0x9eeba69a1eced326)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.LoadHypervisorTime", load_hypervisor_time, 0x100, 0x40, true, 0xc5470f185f2345dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.LaunchHypervisorTime", launch_hypervisor_time, 0x140, 0x40, true, 0x71cde4ac6330a2bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.LoadVsmTime", load_vsm_time, 0x180, 0x40, true, 0xaddae7f130636053)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.LaunchVsmTime", launch_vsm_time, 0x1c0, 0x40, true, 0x27087776e1820405)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.ExecuteTransitionStartTime", execute_transition_start_time, 0x200, 0x40, true, 0xb31325680ac5a6b5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.ExecuteTransitionEndTime", execute_transition_end_time, 0x240, 0x40, true, 0x35fe975ca230eda7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.LoadDriversTime", load_drivers_time, 0x280, 0x40, true, 0x2b2d7ae14cd43f00)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_PERFORMANCE_DATA.CleanupVsmTime", cleanup_vsm_time, 0x2c0, 0x40, true, 0x1508dc9eb193f8fb)
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