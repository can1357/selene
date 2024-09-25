#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADJUSTFULLSCREENGAMMA.hAdapter", h_adapter, 0x0, 0x20, true, 0x5a3361dde86cf488)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADJUSTFULLSCREENGAMMA.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x69510df6cbcadd55)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::dxgi_rgb_t), "_D3DKMT_ADJUSTFULLSCREENGAMMA.Scale", scale, 0x40, 0x60, true, 0x74f83b1b8c44978c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::dxgi_rgb_t), "_D3DKMT_ADJUSTFULLSCREENGAMMA.Offset", offset, 0xa0, 0x60, true, 0xe49da940a9b39c6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif