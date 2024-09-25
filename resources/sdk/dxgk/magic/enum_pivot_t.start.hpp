#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ENUM_PIVOT.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xc9fb1cc732eb09a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ENUM_PIVOT.VidPnTargetId", vid_pn_target_id, 0x20, 0x20, true, 0x260755fd3ffc5b73)
#else
#define _m00
#define _m01
#endif