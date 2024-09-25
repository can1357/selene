#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_callback_data_t*, void*)>*), "_ASYNC_IO_COMPLETION_CONTEXT.UserCallback", user_callback, 0x0, 0x40, true, 0xcd48e299785dc1aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ASYNC_IO_COMPLETION_CONTEXT.UserContext", user_context, 0x40, 0x40, true, 0x9df3040d9bceb85d)
#else
#define _m00
#define _m01
#endif