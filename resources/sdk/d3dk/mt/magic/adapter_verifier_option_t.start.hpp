#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::adapter_verifier_option_type_t), "_D3DKMT_ADAPTER_VERIFIER_OPTION.Type", type, 0x0, 0x20, true, 0x2336aab2edd87f82)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::verifier_option_mode_t), "_D3DKMT_ADAPTER_VERIFIER_OPTION.Mode", mode, 0x20, 0x20, true, 0x2581cda1d6bb8d8a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::adapter_verifier_option_data_t), "_D3DKMT_ADAPTER_VERIFIER_OPTION.Data", data, 0x40, 0xc0, true, 0x623488290bf892bb)
#else
#define _m00
#define _m01
#define _m02
#endif