#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_LOCK_STATUSW.fIsLocked", f_is_locked, 0x0, 0x20, true, 0x909c3b98f888a832)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_LOCK_STATUSW.lpLockOwner", lp_lock_owner, 0x40, 0x40, true, 0xb46a24b518816a8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_LOCK_STATUSW.dwLockDuration", dw_lock_duration, 0x80, 0x20, true, 0xed5f6d1ae80b2032)
#else
#define _m00
#define _m01
#define _m02
#endif