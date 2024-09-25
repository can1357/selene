#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_PERF_STATE.Value", value, 0x0, 0x40, true, 0x8dbe3ad52bd2bace)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PO_FX_PERF_STATE.Context", context, 0x40, 0x40, true, 0x4330183f6a2c55fd)
#else
#define _m00
#define _m01
#endif