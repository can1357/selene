#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::vm_counters_ex_t), "_VM_COUNTERS_EX2.CountersEx", counters_ex, 0x0, 0x0, true, 0x6772d283f93a0ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX2.PrivateWorkingSetSize", private_working_set_size, 0x300, 0x40, true, 0xb62d808739ccbe0b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX2.SharedCommitUsage", shared_commit_usage, 0x340, 0x40, true, 0x5fd8b735a967b55f)
#else
#define _m00
#define _m01
#define _m02
#endif