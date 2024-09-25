#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETGAMMA.TargetId", target_id, 0x0, 0x20, true, 0xeb69143f0f0288fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::gamma_ramp_t), "_DXGKARG_SETTARGETGAMMA.GammaRamp", gamma_ramp, 0x40, 0xc0, true, 0x7c6ef7fdd4692ec1)
#else
#define _m00
#define _m01
#endif