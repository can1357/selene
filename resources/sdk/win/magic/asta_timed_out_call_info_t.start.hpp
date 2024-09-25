#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "AstaTimedOutCallInfo.iid", iid, 0x0, 0x80, true, 0xbc86f8dc409b1f71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "AstaTimedOutCallInfo.procNum", proc_num, 0x80, 0x10, true, 0x408592e1dbea8819)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AstaTimedOutCallInfo.astaTid", asta_tid, 0xa0, 0x20, true, 0xcc4d734351431597)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AstaTimedOutCallInfo.clientTid", client_tid, 0xc0, 0x20, true, 0x173921b62353d04a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "AstaTimedOutCallInfo.wallClockTimeInQueue", wall_clock_time_in_queue, 0x140, 0x40, true, 0x7af568f1d0b3191b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "AstaTimedOutCallInfo.astaThreadPriorityAtTimeout", asta_thread_priority_at_timeout, 0x180, 0x20, true, 0x20cf33d0785ecafe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif