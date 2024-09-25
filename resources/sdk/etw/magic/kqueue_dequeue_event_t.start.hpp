#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_KQUEUE_DEQUEUE_EVENT.ThreadId", thread_id, 0x0, 0x20, true, 0x149cf38304a126c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_KQUEUE_DEQUEUE_EVENT.EntryCount", entry_count, 0x20, 0x20, true, 0x49e1632ab878d782)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_ETW_KQUEUE_DEQUEUE_EVENT.Entries", entries, 0x40, 0x40, true, 0x16022a522fbcc25f)
#else
#define _m00
#define _m01
#define _m02
#endif