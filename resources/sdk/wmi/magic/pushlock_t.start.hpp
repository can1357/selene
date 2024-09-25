#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_PUSHLOCK.PushLock", push_lock, 0x0, 0x40, true, 0xee05c1e4c8367b9b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_PUSHLOCK.ThreadId", thread_id, 0x40, 0x20, true, 0xb9e3b1f36a875543)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_PUSHLOCK.Action", action, 0x60, 0x8, true, 0x258a04bae9cee905)
#else
#define _m00
#define _m01
#define _m02
#endif