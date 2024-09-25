#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_PPM_IDLE_STATE.DomainMembers", domain_members, 0x0, 0x40, true, 0xa9ad3aac087ffd3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PPM_IDLE_STATE.Name", name, 0x540, 0x80, true, 0xe39f53d3481b5340)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATE.Latency", latency, 0x5c0, 0x20, true, 0x8903f1a5ab01f53d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATE.BreakEvenDuration", break_even_duration, 0x5e0, 0x20, true, 0x6fa1177d37216162)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATE.Power", power, 0x600, 0x20, true, 0x2dc922b017e5177e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_IDLE_STATE.StateFlags", state_flags, 0x620, 0x20, true, 0x87cc3313166b36b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::veto_accounting_t), "_PPM_IDLE_STATE.VetoAccounting", veto_accounting, 0x640, 0x40, true, 0x332ef7d9a70637ed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.StateType", state_type, 0x780, 0x8, true, 0xc5df35c2db42de04)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.InterruptsEnabled", interrupts_enabled, 0x788, 0x8, true, 0x43b161813a609b46)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.Interruptible", interruptible, 0x790, 0x8, true, 0xf876334aee8d6bec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.ContextRetained", context_retained, 0x798, 0x8, true, 0x13edb50e2a5698ff)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.CacheCoherent", cache_coherent, 0x7a0, 0x8, true, 0x2edba7ae8ac6f7b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.WakesSpuriously", wakes_spuriously, 0x7a8, 0x8, true, 0x72697256d874cdc4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.PlatformOnly", platform_only, 0x7b0, 0x8, true, 0x93132da3a993cc5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_IDLE_STATE.NoCState", no_c_state, 0x7b8, 0x8, true, 0xf86b77b9d033b844)
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
#define _m14
#endif