#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.hDevice", h_device, 0x0, 0x40, true, 0x30e80fdf306936a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x99dafade4b8b63d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.NumPlaneInfo", num_plane_info, 0x60, 0x20, true, 0x24c3723094b7e7de)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_check_multiplaneoverlaysupport_plane_info_t*), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.pPlaneInfo", p_plane_info, 0x80, 0x40, true, 0x3101654a89af7962)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYSUPPORT.Supported", supported, 0xc0, 0x20, true, 0x8538c36d82a8a932)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif