#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGTYPE_NOTIFICATIONS.PanelSelfRefreshSoftware", panel_self_refresh_software, 0x0, 0x1, true, 0xe4b922291ebfea96, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGTYPE_NOTIFICATIONS.PanelSelfRefreshHardware", panel_self_refresh_hardware, 0x1, 0x1, true, 0x10496e4fe82ed53f, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGTYPE_NOTIFICATIONS.Value", value, 0x0, 0x20, true, 0xa0f6533052a8c61a)
#else
#define _m00
#define _m01
#define _m02
#endif