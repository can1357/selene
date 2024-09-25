#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT.PlaneCount", plane_count, 0x0, 0x20, true, 0x5e828caf0177198a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::check_multiplane_overlay_support_plane_t*), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT.pPlanes", p_planes, 0x40, 0x40, true, 0xc2e65b6b2cc51cd1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT.Supported", supported, 0x80, 0x20, true, 0x54fe2ec017e0d677)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgk_check_multiplane_overlay_support_return_info_t ), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT.ReturnInfo", return_info, 0xa0, 0x20, true, 0x5fe734bf539fd17b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif