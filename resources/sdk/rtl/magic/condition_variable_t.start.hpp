#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CONDITION_VARIABLE.Ptr", ptr, 0x0, 0x40, true, 0x6f44191d5abe4927)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_RTL_CONDITION_VARIABLE.WakeCount", wake_count, 0x0, 0x3, true, 0xa00109d7af1e753f, 3, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_CONDITION_VARIABLE.Waking", waking, 0x3, 0x1, true, 0x7d0b5298ec3a122f, 1, uint64_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CONDITION_VARIABLE.Value", value, 0x0, 0x40, true, 0x3db7aa42e5ab6805)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif