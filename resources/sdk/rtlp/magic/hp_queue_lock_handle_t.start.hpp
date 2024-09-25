#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HP_QUEUE_LOCK_HANDLE.LockPtr", lock_ptr, 0x40, 0x40, true, 0xf21e575d525d2001)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HP_QUEUE_LOCK_HANDLE.HandleData", handle_data, 0x80, 0x40, true, 0xc726af3faffbe988)
#else
#define _m00
#define _m01
#endif