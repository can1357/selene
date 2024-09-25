#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTARGETCONTENTTYPE.TargetId", target_id, 0x0, 0x20, true, 0xd333ad6619cf9248)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_present_path_content_t), "_DXGKARG_SETTARGETCONTENTTYPE.ContentType", content_type, 0x20, 0x20, true, 0x241d8454a1c8e1e0)
#else
#define _m00
#define _m01
#endif