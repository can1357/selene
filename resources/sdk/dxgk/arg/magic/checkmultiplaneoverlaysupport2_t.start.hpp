#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2.PlaneCount", plane_count, 0x0, 0x20, true, 0xa87d97a35a7cb0b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_plane_with_source_t*), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2.pPlanes", p_planes, 0x40, 0x40, true, 0x416630f5d9e78b8d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2.Supported", supported, 0x80, 0x20, true, 0x19f108d26369d0d4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgk_check_multiplane_overlay_support_return_info_t ), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2.ReturnInfo", return_info, 0xa0, 0x20, true, 0xb5dc1dd2f0075c62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif