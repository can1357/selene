#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATES.StateCount", state_count, 0x0, 0x20, true, 0xe19b706bd8c69fcf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATES.InterfaceVersion", interface_version, 0x20, 0x20, true, 0x492d809da62a4a98)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_PLATFORM_STATES.ProcessorCount", processor_count, 0x40, 0x20, true, 0x7733cace3acf48f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_PLATFORM_STATES.CoordinatedInterface", coordinated_interface, 0x60, 0x8, true, 0x4da66b3b016da11e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, uint32_t)>*), "_PPM_PLATFORM_STATES.IdleTest", idle_test, 0x80, 0x40, true, 0x3b04d1788fbbc82f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "_PPM_PLATFORM_STATES.IdlePreExecute", idle_pre_execute, 0xc0, 0x40, true, 0x72ad30aa71dc1e0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "_PPM_PLATFORM_STATES.IdleComplete", idle_complete, 0x100, 0x40, true, 0x8928a5f8ef1eca16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::processor_platform_state_residencies_t*)>*), "_PPM_PLATFORM_STATES.QueryPlatformStateResidency", query_platform_state_residency, 0x140, 0x40, true, 0xcabaca72f7f4cf1b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::platform_idle_accounting_t*), "_PPM_PLATFORM_STATES.Accounting", accounting, 0x180, 0x40, true, 0x74bb164dbd86b4a8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::platform_state_t, 1>), "_PPM_PLATFORM_STATES.State", state, 0x200, 0x0, true, 0xe6d706da019e7d62)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_PLATFORM_STATES.DeepSleepEnabled", deep_sleep_enabled, 0x1c0, 0x8, true, 0xbe1c13dceade7966)
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