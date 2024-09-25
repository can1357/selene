#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_CRITSEC_EVENT_COLLISION.Header", header, 0x0, 0x0, true, 0xb5226e18d7159eec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CRITSEC_EVENT_COLLISION.LockCount", lock_count, 0x100, 0x20, true, 0x205475be69ecc1ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CRITSEC_EVENT_COLLISION.SpinCount", spin_count, 0x120, 0x20, true, 0xde8c7553ed8b6375)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CRITSEC_EVENT_COLLISION.OwningThread", owning_thread, 0x140, 0x40, true, 0xee520cd68912db50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CRITSEC_EVENT_COLLISION.Address", address, 0x180, 0x40, true, 0x538f20e91ac9b52a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif