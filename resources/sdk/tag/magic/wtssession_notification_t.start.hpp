#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWTSSESSION_NOTIFICATION.cbSize", cb_size, 0x0, 0x20, true, 0x3fbdb76be505daf0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWTSSESSION_NOTIFICATION.dwSessionId", dw_session_id, 0x20, 0x20, true, 0x37bee945a0dd2e4b)
#else
#define _m00
#define _m01
#endif