#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_POST_COMPOSITION_CAPS.hAdapter", h_adapter, 0x0, 0x20, true, 0x159f0987c7a88d4c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_POST_COMPOSITION_CAPS.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xf79ad212a1e2db35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DKMT_GET_POST_COMPOSITION_CAPS.MaxStretchFactor", max_stretch_factor, 0x40, 0x20, true, 0xc1fc71b9b81ccbf4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DKMT_GET_POST_COMPOSITION_CAPS.MaxShrinkFactor", max_shrink_factor, 0x60, 0x20, true, 0xf870082348d0db0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif