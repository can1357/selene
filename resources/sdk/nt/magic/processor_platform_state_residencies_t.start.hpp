#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_PLATFORM_STATE_RESIDENCIES.Count", count, 0x0, 0x20, true, 0xc39a6f48b6717573)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::processor_platform_state_residency_t, 1>), "_PROCESSOR_PLATFORM_STATE_RESIDENCIES.States", states, 0x40, 0x80, true, 0xf9638409c88d4cb5)
#else
#define _m00
#define _m01
#endif