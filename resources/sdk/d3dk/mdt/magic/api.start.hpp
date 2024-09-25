#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum d3dk::mdt::vidpn_present_path_rotation_t(enum d3dk::mdt::vidpn_present_path_rotation_t, enum d3dk::mdt::vidpn_present_path_rotation_t)>*), "$D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET$dxgkrnl.sys", 0x5b1ac, 0x0, true, 0x3a585ed2402aa1ea)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$D3DKMDT_VPPR_GET_CONTENT_ROTATION$dxgkrnl.sys", 0x30fc, 0x0, true, 0x63b554552c8432cc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<enum d3dk::mdt::vidpn_present_path_rotation_t(enum d3dk::mdt::vidpn_present_path_rotation_t)>*), "$D3DKMDT_VPPR_GET_OFFSET_ROTATION$dxgkrnl.sys", 0x30b4, 0x0, true, 0x1b96f20abe24f113)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif