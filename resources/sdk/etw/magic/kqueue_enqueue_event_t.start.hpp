#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_KQUEUE_ENQUEUE_EVENT.Entry", entry, 0x0, 0x40, true, 0xafd3074bb37ce16d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_KQUEUE_ENQUEUE_EVENT.ThreadId", thread_id, 0x40, 0x20, true, 0xae1d3277a5403f78)
#else
#define _m00
#define _m01
#endif