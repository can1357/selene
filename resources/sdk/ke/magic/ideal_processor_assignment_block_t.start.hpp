#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ke::process_concurrency_count_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.ExpectedConcurrencyCount", expected_concurrency_count, 0x0, 0x0, false, 0xd3bbd60ac4099e4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ke::ideal_processor_set_breakpoints_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.Breakpoints", breakpoints, 0x0, 0x0, false, 0x49a38d7fafc7c03d)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.AssignmentFlags.ConcurrencyCountFixed", concurrency_count_fixed, 0x0, 0x0, false, 0x959839effd9a44f8, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.AssignmentFlags.AllFlags", all_flags, 0x0, 0x0, false, 0x4d313c85c841cf84)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_assignment_flags_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.AssignmentFlags", assignment_flags, 0x0, 0x0, false, 0xb283ca7711613912)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK.IdealProcessorSets", ideal_processor_sets, 0x0, 0x0, false, 0x8aa4697a790a2257)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif