#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint26_t), "_NDIS_REFCOUNT_STACK_ENTRY.Stack", stack, 0x0, 0x1a, true, 0xfc663209e23c8fef, 26, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_NDIS_REFCOUNT_STACK_ENTRY.RefCount", ref_count, 0x1a, 0x6, true, 0x2a354dd41eb743a7, 6, uint32_t)
#else
#define _m00
#define _m01
#endif