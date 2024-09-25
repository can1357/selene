#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "TUNNEL.Mutex", mutex, 0x0, 0xc0, true, 0x852940e00b399d64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "TUNNEL.Cache", cache, 0x1c0, 0x40, true, 0xf2cf662786998b66)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "TUNNEL.TimerQueue", timer_queue, 0x200, 0x80, true, 0x3e8921312684cd6e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "TUNNEL.NumEntries", num_entries, 0x280, 0x10, true, 0x69336f013cf5c974)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif