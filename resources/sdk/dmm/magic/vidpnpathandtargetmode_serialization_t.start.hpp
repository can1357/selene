#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_t), "_DMM_VIDPNPATHANDTARGETMODE_SERIALIZATION.PathInfo", path_info, 0x0, 0x40, true, 0xa29423333d230ac7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_target_mode_t), "_DMM_VIDPNPATHANDTARGETMODE_SERIALIZATION.TargetMode", target_mode, 0xb40, 0x40, true, 0xc733c59445f96d41)
#else
#define _m00
#define _m01
#endif