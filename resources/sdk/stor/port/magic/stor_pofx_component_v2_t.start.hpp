#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.Version", version, 0x0, 0x20, true, 0x3fb641642611a104)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.Size", size, 0x20, 0x20, true, 0xfab4aaf0fe845e71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.FStateCount", f_state_count, 0x40, 0x20, true, 0xb7171550192118d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.DeepestWakeableFState", deepest_wakeable_f_state, 0x60, 0x20, true, 0x319976bb8714e595)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_STOR_POFX_COMPONENT_V2.Id", id, 0x80, 0x80, true, 0x3b4ff4e83418b858)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.DeepestAdapterPowerRequiredFState", deepest_adapter_power_required_f_state, 0x100, 0x20, true, 0xba7045938a459d39)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_V2.DeepestCrashDumpReadyFState", deepest_crash_dump_ready_f_state, 0x120, 0x20, true, 0x69cc5c94f7ea655b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_pofx_component_idle_state_t, 1>), "_STOR_POFX_COMPONENT_V2.FStates", f_states, 0x140, 0x0, true, 0x22aaba37ff0fc8d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif