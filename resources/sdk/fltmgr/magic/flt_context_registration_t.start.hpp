#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_CONTEXT_REGISTRATION.ContextType", context_type, 0x0, 0x10, true, 0x4f046565905e7406)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_CONTEXT_REGISTRATION.Flags", flags, 0x10, 0x10, true, 0x3078c868e89be4b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_FLT_CONTEXT_REGISTRATION.ContextCleanupCallback", context_cleanup_callback, 0x40, 0x40, true, 0xe2bb2a89056bf47a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FLT_CONTEXT_REGISTRATION.Size", size, 0x80, 0x40, true, 0xbdf3e1f0e3c4e204)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_CONTEXT_REGISTRATION.PoolTag", pool_tag, 0xc0, 0x20, true, 0xa02daad511656cb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint16_t)>*), "_FLT_CONTEXT_REGISTRATION.ContextAllocateCallback", context_allocate_callback, 0x100, 0x40, true, 0xea9cec3e1bf3f5f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_FLT_CONTEXT_REGISTRATION.ContextFreeCallback", context_free_callback, 0x140, 0x40, true, 0xd8d515055c23e0e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif