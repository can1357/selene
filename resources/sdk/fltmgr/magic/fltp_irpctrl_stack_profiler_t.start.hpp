#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_FLTP_IRPCTRL_STACK_PROFILER.Frame", frame, 0x0, 0x40, true, 0x247db126fa5fc997)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 10>), "_FLTP_IRPCTRL_STACK_PROFILER.Profile", profile, 0x40, 0x40, true, 0xa68c7008d22c992a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_FLTP_IRPCTRL_STACK_PROFILER.Timer", timer, 0x180, 0x0, true, 0x528c7baab16cdcd9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_FLTP_IRPCTRL_STACK_PROFILER.Dpc", dpc, 0x380, 0x0, true, 0xa6a05e734a5af2e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_FLTP_IRPCTRL_STACK_PROFILER.WorkItem", work_item, 0x580, 0x0, true, 0x88dd485671983a8e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_FLTP_IRPCTRL_STACK_PROFILER.Mutex", mutex, 0x680, 0xc0, true, 0x321d184e0b7f0523)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLTP_IRPCTRL_STACK_PROFILER.WorkItemFlags", work_item_flags, 0x840, 0x20, true, 0xc02b3f9755fdec53)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLTP_IRPCTRL_STACK_PROFILER.Flags", flags, 0x860, 0x20, true, 0x7d24a022cc3beee3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLTP_IRPCTRL_STACK_PROFILER.AllocCount", alloc_count, 0x880, 0x20, true, 0xef8d8ffa05db0c2d)
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
#endif