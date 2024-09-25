#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_LFH_FAST_REF.Target", target, 0x0, 0x40, true, 0xc91afb764d37a597)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_LFH_FAST_REF.Value", value, 0x0, 0x40, true, 0x522cc165cef7fdd)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_HEAP_LFH_FAST_REF.RefCount", ref_count, 0x0, 0xc, true, 0x316d3756bfb5edfb, 12, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif