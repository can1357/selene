#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_PROTECTEDSESSIONSTATUS.hProtectedSession", h_protected_session, 0x0, 0x40, true, 0xab837e88288eee79)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::protected_session_status_t), "_DXGKARGCB_PROTECTEDSESSIONSTATUS.Status", status, 0x40, 0x20, true, 0xfa4f104387d87f92)
#else
#define _m00
#define _m01
#endif