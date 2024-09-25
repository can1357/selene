#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::adapter_verifier_vidmm_flags_t), "_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA.VidMmFlags", vid_mm_flags, 0x0, 0x20, true, 0x73d77f5034c2d130)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::adapter_verifier_vidmm_trim_interval_t), "_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA.VidMmTrimInterval", vid_mm_trim_interval, 0x0, 0xc0, true, 0x4671d2d9ea1ee9e2)
#else
#define _m00
#define _m01
#endif