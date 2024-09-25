#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_PERF_STATE_CHANGE.Set", set, 0x0, 0x20, true, 0xe4012beab203dc0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_PERF_STATE_CHANGE.StateIndex", state_index, 0x40, 0x20, true, 0x828ec9a08ca5a84f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PO_FX_PERF_STATE_CHANGE.StateValue", state_value, 0x40, 0x40, true, 0x4ece2bb10645894a)
#else
#define _m00
#define _m01
#define _m02
#endif