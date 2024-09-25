#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_TCP_OFFLOAD_STATE_DELEGATED.Header", header, 0x0, 0x40, true, 0x43c7cbadb5a8296b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::tcp_offload_connection_state_t), "_TCP_OFFLOAD_STATE_DELEGATED.State", state, 0x40, 0x20, true, 0x258618cc7705ac97)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_DELEGATED.Flags", flags, 0x60, 0x10, true, 0xf09153e2baef4b46)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.RcvNxt", rcv_nxt, 0x80, 0x20, true, 0x5a0ee7beaf9d7dc)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.RcvWnd", rcv_wnd, 0xa0, 0x20, true, 0xf0fb5c271e634992)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SndUna", snd_una, 0xc0, 0x20, true, 0x3947e15a5d2954c3)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SndNxt", snd_nxt, 0xe0, 0x20, true, 0x112cac9f58e27798)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SndMax", snd_max, 0x100, 0x20, true, 0x3f5388822fabf6af)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SndWnd", snd_wnd, 0x120, 0x20, true, 0x488bf5af0c501de4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.MaxSndWnd", max_snd_wnd, 0x140, 0x20, true, 0xf7d2f6ebcd5fa7e0)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SendWL1", send_wl1, 0x160, 0x20, true, 0x2e7d63a851b7b971)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.CWnd", c_wnd, 0x180, 0x20, true, 0x69c4b4170267115d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SsThresh", ss_thresh, 0x1a0, 0x20, true, 0x15a89837ebb457e2)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_DELEGATED.SRtt", s_rtt, 0x1c0, 0x10, true, 0x9d495224249838e9)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_DELEGATED.RttVar", rtt_var, 0x1d0, 0x10, true, 0x688de143725ed1ac)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.TsRecent", ts_recent, 0x1e0, 0x20, true, 0x914925fbb50260ad)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.TsRecentAge", ts_recent_age, 0x200, 0x20, true, 0x6af305a42915de9c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.TsTime", ts_time, 0x220, 0x20, true, 0x5dbbb0f9ce03427b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.TotalRT", total_rt, 0x240, 0x20, true, 0xcf122a076ddff9c2)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_DELEGATED.DupAckCount", dup_ack_count, 0x260, 0x8, true, 0xe88574072ae2ce36)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_DELEGATED.SndWndProbeCount", snd_wnd_probe_count, 0x268, 0x8, true, 0xbb601bac28c198da)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_keep_alive_t), "_TCP_OFFLOAD_STATE_DELEGATED.KeepAlive", keep_alive, 0x280, 0x40, true, 0x362aa0f0fe6a59f7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_retransmit_t), "_TCP_OFFLOAD_STATE_DELEGATED.Retransmit", retransmit, 0x2c0, 0x40, true, 0xc7a44d9333979b64)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_TCP_OFFLOAD_STATE_DELEGATED.SendDataHead", send_data_head, 0x300, 0x40, true, 0x9421bf3ce247c2df)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_TCP_OFFLOAD_STATE_DELEGATED.SendDataTail", send_data_tail, 0x340, 0x40, true, 0x940c707112217492)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.SendBacklogSize", send_backlog_size, 0x300, 0x20, true, 0x3a608a629c3396ab)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_TCP_OFFLOAD_STATE_DELEGATED.BufferedData", buffered_data, 0x380, 0x40, true, 0xb11426e03845765a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.ReceiveBacklogSize", receive_backlog_size, 0x380, 0x20, true, 0x94501f31bfe9776c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.DWnd", d_wnd, 0x3c0, 0x20, true, 0xebc0a49153520b7a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_DELEGATED.KeepAlive.ProbeCount", probe_count, 0x0, 0x8, true, 0x275cf16b033b6a18)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.KeepAlive.TimeoutDelta", timeout_delta, 0x20, 0x20, true, 0x67fa35d2941c6902)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TCP_OFFLOAD_STATE_DELEGATED.Retransmit.Count", count, 0x0, 0x8, true, 0x2bcf1767e9a74465)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_DELEGATED.Retransmit.TimeoutDelta", timeout_delta, 0x20, 0x20, true, 0xca132284caa5cee)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m023
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m21
#define _m22
#define _m24
#define _m25
#endif