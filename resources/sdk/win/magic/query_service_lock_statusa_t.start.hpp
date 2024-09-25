#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_LOCK_STATUSA.fIsLocked", f_is_locked, 0x0, 0x20, true, 0xb4f50224d51dd924)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_LOCK_STATUSA.lpLockOwner", lp_lock_owner, 0x40, 0x40, true, 0xae772a437d1b938d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_LOCK_STATUSA.dwLockDuration", dw_lock_duration, 0x80, 0x20, true, 0xe567b494de42cad5)
#else
#define _m00
#define _m01
#define _m02
#endif