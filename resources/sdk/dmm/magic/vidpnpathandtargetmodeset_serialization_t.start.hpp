#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_t), "_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION.PathInfo", path_info, 0x0, 0x40, true, 0x4d417aa261decbe9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dmm::vidpntargetmodeset_serialization_t), "_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION.TargetModeSet", target_mode_set, 0xb40, 0x80, true, 0x5e328c2f280d4ec5)
#else
#define _m00
#define _m01
#endif