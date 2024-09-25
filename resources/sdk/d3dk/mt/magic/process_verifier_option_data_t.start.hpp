#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::process_verifier_vidmm_flags_t), "_D3DKMT_PROCESS_VERIFIER_OPTION_DATA.VidMmFlags", vid_mm_flags, 0x0, 0x20, true, 0xf55680f82875897)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::process_verifier_vidmm_restrict_budget_t), "_D3DKMT_PROCESS_VERIFIER_OPTION_DATA.VidMmRestrictBudget", vid_mm_restrict_budget, 0x0, 0x80, true, 0x9e2f50ba7006f6b8)
#else
#define _m00
#define _m01
#endif