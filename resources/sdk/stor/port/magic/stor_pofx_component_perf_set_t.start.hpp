#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_PERF_SET.Version", version, 0x0, 0x20, true, 0xacedd0263953d00b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_PERF_SET.Size", size, 0x20, 0x20, true, 0xe530d8c2fe41c99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_COMPONENT_PERF_SET.Flags", flags, 0x40, 0x40, true, 0xc422534b5bd5ecc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_pofx_perf_state_unit_t), "_STOR_POFX_COMPONENT_PERF_SET.PStateUnit", p_state_unit, 0x80, 0x20, true, 0xf1a0b5d904d0dc7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_pofx_perf_state_type_t), "_STOR_POFX_COMPONENT_PERF_SET.PStateType", p_state_type, 0xa0, 0x20, true, 0x4a65df0e1942af02)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Discrete.Count", count, 0x0, 0x20, true, 0xeb59be65cc05ac9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Discrete.Offset", offset, 0x20, 0x20, true, 0x8fdec347ba0ba716)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_discrete_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Discrete", discrete, 0x0, 0x40, true, 0x98c646c0ba410436)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Range.Minimum", minimum, 0x0, 0x40, true, 0x2b0326e97e9dfec5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Range.Maximum", maximum, 0x40, 0x40, true, 0x36bef058e783575d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_range_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates.Range", range, 0x0, 0x80, true, 0xb22be081378dc74c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_p_states_t), "_STOR_POFX_COMPONENT_PERF_SET.PStates", p_states, 0xc0, 0x80, true, 0xecb98a0ddcbf4b57)
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