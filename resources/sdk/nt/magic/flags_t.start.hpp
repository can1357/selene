#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.Removable", removable, 0x0, 0x1, true, 0x4f02fbae3f0ca05a, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.GroupAssigned", group_assigned, 0x1, 0x1, true, 0x1bdb17e62abb14e8, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.GroupCommitted", group_committed, 0x2, 0x1, true, 0x81cd4d3d5b7a01a8, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.GroupAssignmentFixed", group_assignment_fixed, 0x3, 0x1, true, 0xe4380455ead37d0b, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.SmtSetsPresent", smt_sets_present, 0x5, 0x1, true, 0x2845e476a44b658d, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_flags.ProcessorOnly", processor_only, 0x4, 0x1, true, 0x1be8bc16ad5b9d76, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif