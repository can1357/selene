#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_PREFETCH_FLAGS.Flags.Priority", priority, 0x0, 0x3, true, 0x7c601a54097037ed, 3, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MM_PREFETCH_FLAGS.Flags.RepurposePriority", repurpose_priority, 0x3, 0x3, true, 0xf77ec0c64372b41e, 3, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MM_PREFETCH_FLAGS.Flags.PriorityProtection", priority_protection, 0x6, 0x1, true, 0xb81375528650c562, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MM_PREFETCH_FLAGS.Flags.MustBeZero", must_be_zero, 0x7, 0x2, true, 0x866765582be602b, 2, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint23_t), "_MM_PREFETCH_FLAGS.Flags.CannotBeUsedAsFlags", cannot_be_used_as_flags, 0x9, 0x17, true, 0x57428b0a31000ca, 23, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_MM_PREFETCH_FLAGS.Flags", flags, 0x0, 0x20, true, 0x376056c8a093f507)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_PREFETCH_FLAGS.AllFlags", all_flags, 0x0, 0x20, true, 0x51f9c75efce688d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif