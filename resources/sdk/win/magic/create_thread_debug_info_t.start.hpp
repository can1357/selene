#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_THREAD_DEBUG_INFO.hThread", h_thread, 0x0, 0x40, true, 0xb928426f3a9ffefd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CREATE_THREAD_DEBUG_INFO.lpThreadLocalBase", lp_thread_local_base, 0x40, 0x40, true, 0x949c0c0804dad74f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_CREATE_THREAD_DEBUG_INFO.lpStartAddress", lp_start_address, 0x80, 0x40, true, 0x334a84d916217dff)
#else
#define _m00
#define _m01
#define _m02
#endif