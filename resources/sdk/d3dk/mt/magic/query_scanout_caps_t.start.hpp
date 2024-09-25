#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERY_SCANOUT_CAPS.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xeade5edc84b3f4b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERY_SCANOUT_CAPS.Caps", caps, 0x20, 0x20, true, 0x3533cd7493a7f01b)
#else
#define _m00
#define _m01
#endif