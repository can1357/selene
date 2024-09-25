#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_AUTOBOOST_NO_ENTRIES_EVENT.Lock", lock, 0x0, 0x40, true, 0x848447ec4e8b5293)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_AUTOBOOST_NO_ENTRIES_EVENT.ThreadId", thread_id, 0x40, 0x20, true, 0xbe8404dfbb99e289)
#else
#define _m00
#define _m01
#endif