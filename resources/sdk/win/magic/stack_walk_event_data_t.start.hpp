#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STACK_WALK_EVENT_DATA.TimeStamp", time_stamp, 0x0, 0x40, true, 0x38b21d6539da96a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_WALK_EVENT_DATA.ProcessId", process_id, 0x40, 0x20, true, 0xffd7b2472b357030)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_WALK_EVENT_DATA.ThreadId", thread_id, 0x60, 0x20, true, 0xcc77f5bc91cb525)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_STACK_WALK_EVENT_DATA.Addresses", addresses, 0x80, 0x40, true, 0xe90d52298e49cc99)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif