#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_PROCESS_VERIFIER_OPTION.hProcess", h_process, 0x0, 0x40, true, 0x4e19219e84c5fcde)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::process_verifier_option_type_t), "_D3DKMT_PROCESS_VERIFIER_OPTION.Type", type, 0x40, 0x20, true, 0xa4d581d9893fe538)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::verifier_option_mode_t), "_D3DKMT_PROCESS_VERIFIER_OPTION.Mode", mode, 0x60, 0x20, true, 0x41c5645eca074485)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::process_verifier_option_data_t), "_D3DKMT_PROCESS_VERIFIER_OPTION.Data", data, 0x80, 0x80, true, 0x3e9081c447d8443f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif