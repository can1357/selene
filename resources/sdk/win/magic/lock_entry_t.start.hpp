#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::lock_entry_t*), "LockEntry._pNext", p_next, 0x0, 0x40, true, 0x1a36ad39fe4bd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::lock_entry_t*), "LockEntry._pPrev", p_prev, 0x40, 0x40, true, 0xb4c3a50bd2f0bddd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "LockEntry._pRWLock", p_rw_lock, 0x80, 0x40, true, 0xb31e7ae2faf19d78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "LockEntry._wReaderLevel", w_reader_level, 0xc0, 0x10, true, 0x442601aefa352c0d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif