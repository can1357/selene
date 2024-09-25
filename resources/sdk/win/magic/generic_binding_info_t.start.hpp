#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "__GENERIC_BINDING_INFO.pObj", p_obj, 0x0, 0x40, true, 0x7ac11a83419ea8ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__GENERIC_BINDING_INFO.Size", size, 0x40, 0x20, true, 0xe08807aa974c9dca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*)>*), "__GENERIC_BINDING_INFO.pfnBind", pfn_bind, 0x80, 0x40, true, 0x9fffdf5ca01c4f69)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t*)>*), "__GENERIC_BINDING_INFO.pfnUnbind", pfn_unbind, 0xc0, 0x40, true, 0xc3464f397b41ae62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif