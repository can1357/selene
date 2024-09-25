#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_CONNECTION_CHANGE.ConnectionChangeId", connection_change_id, 0x0, 0x40, true, 0x23b68800ea2bf564)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_DXGK_CONNECTION_CHANGE.TargetId", target_id, 0x40, 0x18, true, 0xa56ed269734ce5eb, 24, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXGK_CONNECTION_CHANGE.ConnectionStatus", connection_status, 0x58, 0x4, true, 0xd2081cae364babcc, 4, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_CONNECTION_CHANGE.MonitorConnect.LinkTargetType", link_target_type, 0x0, 0x20, true, 0xc2e5cfa2a41e9b8d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_monitor_connect_t), "_DXGK_CONNECTION_CHANGE.MonitorConnect", monitor_connect, 0x60, 0x20, true, 0xe5e8ba2602d37db6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_CONNECTION_CHANGE.TargetConnect.BaseTargetType", base_target_type, 0x0, 0x20, true, 0xb3432cf6057b23f3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONNECTION_CHANGE.TargetConnect.NewTargetId", new_target_id, 0x20, 0x20, true, 0x85f8996e00bc2f1e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_target_connect_t), "_DXGK_CONNECTION_CHANGE.TargetConnect", target_connect, 0x60, 0x40, true, 0xd196f9b7cc2151e1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_CONNECTION_CHANGE.TargetJoin.BaseTargetType", base_target_type, 0x0, 0x20, true, 0xe764dacecae96e30)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CONNECTION_CHANGE.TargetJoin.NewTargetId", new_target_id, 0x20, 0x20, true, 0xe668ab8358feab8b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_target_connect_t), "_DXGK_CONNECTION_CHANGE.TargetJoin", target_join, 0x60, 0x40, true, 0x7d96e584bbdbac79)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif