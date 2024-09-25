#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING_EX.StateCount", state_count, 0x0, 0x20, true, 0xfde3f42316a7b331)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING_EX.TotalTransitions", total_transitions, 0x20, 0x20, true, 0x4e8d2f214edcc1c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING_EX.ResetCount", reset_count, 0x40, 0x20, true, 0xa6663b625f300e24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING_EX.AbortCount", abort_count, 0x60, 0x20, true, 0xc4a35e6b26511f95)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLE_ACCOUNTING_EX.StartTime", start_time, 0x80, 0x40, true, 0x1e44bf12f85dfecb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::idle_state_accounting_ex_t, 1>), "PPM_IDLE_ACCOUNTING_EX.State", state, 0xc0, 0x0, true, 0x7cb2e82fcd6c749f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif