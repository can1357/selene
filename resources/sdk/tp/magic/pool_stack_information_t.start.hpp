#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TP_POOL_STACK_INFORMATION.StackReserve", stack_reserve, 0x0, 0x40, true, 0xe338fae12b2baf5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TP_POOL_STACK_INFORMATION.StackCommit", stack_commit, 0x40, 0x40, true, 0x7329c8c758b50526)
#else
#define _m00
#define _m01
#endif