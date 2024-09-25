#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0xa328b03aea98a19e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_connectivity_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.DisplayConnectivity", display_connectivity, 0x20, 0x20, true, 0x60bc46f921be73)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_lid_state_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.DisplayLidState", display_lid_state, 0x40, 0x20, true, 0xaf0996119ac10695)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_basic_display_topology_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.DisplayTopology", display_topology, 0x60, 0x20, true, 0x480ddc7361380ca6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_link_state_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.DisplayLinkState", display_link_state, 0x80, 0x20, true, 0x79ce940ca859690e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_mode_set_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.DisplayModeSet", display_mode_set, 0xa0, 0x20, true, 0xfda7155b6eb2e65c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAYSTATE_NONINTRUSIVE.ReturnSubStatus", return_sub_status, 0xc0, 0x20, true, 0xca72dc7173e99490)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif