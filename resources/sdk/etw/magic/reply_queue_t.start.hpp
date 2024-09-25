#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t), "_ETW_REPLY_QUEUE.Queue", queue, 0x0, 0x0, true, 0xd82d1b169b4374fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_REPLY_QUEUE.EventsLost", events_lost, 0x200, 0x20, true, 0x3c6f0b6dbfb32cc4)
#else
#define _m00
#define _m01
#endif