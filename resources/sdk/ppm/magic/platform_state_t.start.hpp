#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATE.Latency", latency, 0x40, 0x20, true, 0xfcda67b0dc6b7e78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATE.BreakEvenDuration", break_even_duration, 0x60, 0x20, true, 0x62a0c39e7121dae6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::veto_accounting_t), "_PPM_PLATFORM_STATE.VetoAccounting", veto_accounting, 0x80, 0x40, true, 0x4f8b282f8e6af363)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_PLATFORM_STATE.TransitionDebugger", transition_debugger, 0x1c0, 0x8, true, 0xbfe234b72eab07e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_PLATFORM_STATE.Platform", platform, 0x1c8, 0x8, true, 0xded55315c97b7e4b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATE.DependencyListCount", dependency_list_count, 0x1e0, 0x20, true, 0x666e74312bf91b37)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PPM_PLATFORM_STATE.Processors", processors, 0x200, 0x40, true, 0x17b4795184adca7c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PPM_PLATFORM_STATE.Name", name, 0x740, 0x80, true, 0xecec6b73729bc54c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_dependency_t*), "_PPM_PLATFORM_STATE.DependencyLists", dependency_lists, 0x7c0, 0x40, true, 0x372d92de76170da4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union ppm::coordinated_synchronization_t), "_PPM_PLATFORM_STATE.Synchronization", synchronization, 0x800, 0x20, true, 0xd08346c8d52f116f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_PPM_PLATFORM_STATE.EnterTime", enter_time, 0x840, 0x40, true, 0x59942f10158416d0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_PPM_PLATFORM_STATE.RefCount", ref_count, 0xa00, 0x20, true, 0x61d7318b88c3dff6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_PPM_PLATFORM_STATE.CacheAlign0", cache_align0, 0xa00, 0x0, true, 0xf8d5dc82087cfc64)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_PLATFORM_STATE.LevelId", level_id, 0x0, 0x40, true, 0xd112458ec7855a05)
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
#define _m12
#define _m13
#endif