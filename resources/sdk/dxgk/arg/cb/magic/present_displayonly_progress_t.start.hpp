#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x8b70db0c15d5daa0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::present_display_only_progress_id_t), "_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS.ProgressId", progress_id, 0x20, 0x20, true, 0xe6c56d60b06cbe8b)
#else
#define _m00
#define _m01
#endif