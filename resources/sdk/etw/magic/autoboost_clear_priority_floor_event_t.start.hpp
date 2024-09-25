#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT.Lock", lock, 0x0, 0x40, true, 0xfe9c407def8fa63e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT.ThreadId", thread_id, 0x40, 0x20, true, 0xd8a0e403a2b7b0c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_AUTOBOOST_CLEAR_PRIORITY_FLOOR_EVENT.BoostBitmap", boost_bitmap, 0x60, 0x20, true, 0xec833d8ddf5c1e46)
#else
#define _m00
#define _m01
#define _m02
#endif