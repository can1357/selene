#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::activate_specific_diag_type_t), "_D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE.Type", type, 0x0, 0x20, true, 0x561748a32fe6f97a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE.Activate", activate, 0x20, 0x20, true, 0x16ca946b6ef55897)
#else
#define _m00
#define _m01
#endif