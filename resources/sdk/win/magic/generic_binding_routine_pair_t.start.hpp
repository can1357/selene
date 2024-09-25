#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*)>*), "_GENERIC_BINDING_ROUTINE_PAIR.pfnBind", pfn_bind, 0x0, 0x40, true, 0x44faf79b854928ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t*)>*), "_GENERIC_BINDING_ROUTINE_PAIR.pfnUnbind", pfn_unbind, 0x40, 0x40, true, 0x13231e5e8c760626)
#else
#define _m00
#define _m01
#endif