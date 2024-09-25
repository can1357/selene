#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_Bindings.BindingsLength", bindings_length, 0x0, 0x20, true, 0xc7343b9261b3fd2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::channel_bindings_t*), "_SecPkgContext_Bindings.Bindings", bindings, 0x40, 0x40, true, 0xe1c618df244c9fdf)
#else
#define _m00
#define _m01
#endif