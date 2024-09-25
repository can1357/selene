#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.Width", width, 0x0, 0x20, true, 0xd5525d44e2978523)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.Height", height, 0x20, 0x20, true, 0xbc0f234fd203eb19)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.Format", format, 0x40, 0x20, true, 0x1807c482ee49915e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.RefreshRate", refresh_rate, 0x60, 0x40, true, 0xf874deebc4e9907a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_SHAREDPRIMARYSURFACEDATA.VidPnSourceId", vid_pn_source_id, 0xa0, 0x20, true, 0x705cbefd76539f58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif