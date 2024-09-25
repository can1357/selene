#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::vidschescapetype_t), "_D3DKMT_VIDSCH_ESCAPE.Type", type, 0x0, 0x20, true, 0xf018112f51c4fdd0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDSCH_ESCAPE.PreemptionControl", preemption_control, 0x20, 0x20, true, 0x9c44dcc88b4c4e97)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDSCH_ESCAPE.EnableContextDelay", enable_context_delay, 0x20, 0x20, true, 0xecbb463b2fa1cc37)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.TdrControl2.TdrControl", tdr_control, 0x0, 0x20, true, 0x50c970afef71b0d4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.TdrControl2.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0xf1d3f4849134aa70)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_tdr_control2_t), "_D3DKMT_VIDSCH_ESCAPE.TdrControl2", tdr_control2, 0x20, 0x40, true, 0x4aff3cb5e3b6c72a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_VIDSCH_ESCAPE.SuspendScheduler", suspend_scheduler, 0x20, 0x20, true, 0xa5ca467f16e93b73)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.TdrControl", tdr_control, 0x20, 0x20, true, 0x86ee365550f642e6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.SuspendTime", suspend_time, 0x20, 0x20, true, 0x643938581d913c1e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.TdrLimit.Count", count, 0x0, 0x20, true, 0x233a5ddd650bdc30)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_VIDSCH_ESCAPE.TdrLimit.Time", time, 0x20, 0x20, true, 0x898b580397ffe951)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_tdr_limit_t), "_D3DKMT_VIDSCH_ESCAPE.TdrLimit", tdr_limit, 0x20, 0x40, true, 0x3b1ac691c1e928fa)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::escape_pfn_control_command_t), "_D3DKMT_VIDSCH_ESCAPE.PfnControl", pfn_control, 0x20, 0x20, true, 0x4dadef53a7fb4a0b)
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
#endif