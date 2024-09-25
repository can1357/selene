#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_COMPLETION_NODE_TRACKING_LIST.Lock", lock, 0x0, 0x40, true, 0x73a9d7829e37b8c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_COMPLETION_NODE_TRACKING_LIST.ActiveList", active_list, 0x40, 0x80, true, 0xc6195fb42de9d52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_COMPLETION_NODE_TRACKING_LIST.WaitingList", waiting_list, 0xc0, 0x80, true, 0x7051fb3cdf0cf7eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::track_completion_nodes_t*), "_COMPLETION_NODE_TRACKING_LIST.TrackCtrl", track_ctrl, 0x140, 0x40, true, 0xf74358a2e38c3376)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif