#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET.LocalBudget", local_budget, 0x0, 0x40, true, 0x4fc2cc7d1e39e482)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET.NonLocalBudget", non_local_budget, 0x40, 0x40, true, 0x3c7ece4e5dc2ca3b)
#else
#define _m00
#define _m01
#endif