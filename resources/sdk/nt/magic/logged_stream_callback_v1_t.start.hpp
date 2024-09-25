#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOGGED_STREAM_CALLBACK_V1.LogHandle", log_handle, 0x0, 0x40, true, 0x906251d48ecab3d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int64_t)>*), "_LOGGED_STREAM_CALLBACK_V1.FlushToLsnRoutine", flush_to_lsn_routine, 0x40, 0x40, true, 0x916bf8c9ca643b84)
#else
#define _m00
#define _m01
#endif