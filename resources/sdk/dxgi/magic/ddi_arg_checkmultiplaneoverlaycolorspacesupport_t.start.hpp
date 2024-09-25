#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.hDevice", h_device, 0x0, 0x40, true, 0x5b4cd591b37865fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xe9974d46e7e98167)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::format_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.Format", format, 0x60, 0x20, true, 0xb7432eccc926d4a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.ColorSpace", color_space, 0x80, 0x20, true, 0xdc4fa109fb95eec0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGI_DDI_ARG_CHECKMULTIPLANEOVERLAYCOLORSPACESUPPORT.Supported", supported, 0xa0, 0x20, true, 0x9bb18c170b0df7f0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif