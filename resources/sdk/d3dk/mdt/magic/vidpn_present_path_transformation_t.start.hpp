#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_present_path_scaling_t), "_D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION.Scaling", scaling, 0x0, 0x20, true, 0x22463c15af95b621)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_scaling_support_t), "_D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION.ScalingSupport", scaling_support, 0x20, 0x20, true, 0x78b43de5672556b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_present_path_rotation_t), "_D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION.Rotation", rotation, 0x40, 0x20, true, 0x796c0ba25ebc273e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_rotation_support_t), "_D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION.RotationSupport", rotation_support, 0x60, 0x20, true, 0xcd9d67330470009)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif