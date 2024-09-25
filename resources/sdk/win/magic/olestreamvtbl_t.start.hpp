#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::olestream_t*, void*, uint32_t)>*), "_OLESTREAMVTBL.Get", get, 0x0, 0x40, true, 0x50a5f4126c585ea4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::olestream_t*, const void*, uint32_t)>*), "_OLESTREAMVTBL.Put", put, 0x40, 0x40, true, 0x9ed93f33f687ad8c)
#else
#define _m00
#define _m01
#endif