#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_UPDATEMONITORLINKINFO.VideoPresentTargetId", video_present_target_id, 0x0, 0x20, true, 0x23e756c4692ba450)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::monitorlinkinfo_t), "_DXGKARG_UPDATEMONITORLINKINFO.MonitorLinkInfo", monitor_link_info, 0x20, 0x60, true, 0xca493a765245c9e3)
#else
#define _m00
#define _m01
#endif