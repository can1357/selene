#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRESENTMULTIPLANEOVERLAYINFO.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xc1d1a327779ad52d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRESENTMULTIPLANEOVERLAYINFO.PlaneListCount", plane_list_count, 0x20, 0x20, true, 0xeb485545abcc44a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::presentmultiplaneoverlaylist_t*), "_DXGK_PRESENTMULTIPLANEOVERLAYINFO.pPlaneList", p_plane_list, 0x40, 0x40, true, 0x9147892f8edba475)
#else
#define _m00
#define _m01
#define _m02
#endif