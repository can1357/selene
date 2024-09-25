#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_continue_t*, const struct nt::guid_t*, void**)>*), "IContinueVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xc0c21e66b87ef28a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_continue_t*)>*), "IContinueVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xa92622482d2cb6ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_continue_t*)>*), "IContinueVtbl.Release", release, 0x80, 0x40, true, 0xfb523d1578e3c1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_continue_t*)>*), "IContinueVtbl.FContinue", f_continue, 0xc0, 0x40, true, 0x7a534afcd1d41cc5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif