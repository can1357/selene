#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PF_KERNEL_GLOBALS.AccessBufferAgeThreshold", access_buffer_age_threshold, 0x0, 0x40, true, 0xceae31d2e735cc27)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_PF_KERNEL_GLOBALS.AccessBufferRef", access_buffer_ref, 0x40, 0x40, true, 0xfe08561a244eabfa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PF_KERNEL_GLOBALS.AccessBufferExistsEvent", access_buffer_exists_event, 0x80, 0xc0, true, 0xc22e8824b038fc25)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PF_KERNEL_GLOBALS.AccessBufferMax", access_buffer_max, 0x140, 0x20, true, 0xb57b4562f6f94d4f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_PF_KERNEL_GLOBALS.AccessBufferList", access_buffer_list, 0x200, 0x80, true, 0x20d79636bf07e334)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PF_KERNEL_GLOBALS.StreamSequenceNumber", stream_sequence_number, 0x280, 0x20, true, 0x8fb0cb4d96d3023e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PF_KERNEL_GLOBALS.Flags", flags, 0x2a0, 0x20, true, 0x3bb0127eb9e613da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PF_KERNEL_GLOBALS.ScenarioPrefetchCount", scenario_prefetch_count, 0x2c0, 0x20, true, 0xe4c36a7117eaa82d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif