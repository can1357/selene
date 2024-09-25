#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "COleStaticMutexSem._fInitialized", f_initialized, 0x8, 0x8, true, 0x4d47c5a13242d064)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "COleStaticMutexSem._fUseSpincount", f_use_spincount, 0x10, 0x8, true, 0xaccb66b1c66c47e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COleStaticMutexSem._cLocks", c_locks, 0x20, 0x20, true, 0x5c4894913394377b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COleStaticMutexSem._dwLine", dw_line, 0x40, 0x20, true, 0xa618472c99189d69)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "COleStaticMutexSem._pszFile", psz_file, 0x80, 0x40, true, 0x1a2bd8b828563cf2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "COleStaticMutexSem._pszLockName", psz_lock_name, 0xc0, 0x40, true, 0xa6bab64ba3169288)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "COleStaticMutexSem._cs", cs, 0x100, 0x40, true, 0x13726ac832c9d98e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::com_lock_order_t), "COleStaticMutexSem._lockOrder", lock_order, 0x0, 0x8, true, 0x6ecc0877192aa63d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif