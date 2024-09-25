#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGUI_CREATE_THREAD.HandleToThread", handle_to_thread, 0x0, 0x40, true, 0xc05816e42e2fa7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::create_thread_t), "_DBGUI_CREATE_THREAD.NewThread", new_thread, 0x40, 0x80, true, 0x7cbe81b767477dcc)
#else
#define _m00
#define _m01
#endif