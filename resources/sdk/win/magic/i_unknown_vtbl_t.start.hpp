#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_unknown_t*, const struct nt::guid_t const*, void**)>*), "IUnknownVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x1157048489ef2748)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_unknown_t*)>*), "IUnknownVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x3c0ba9eee36c70eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_unknown_t*)>*), "IUnknownVtbl.Release", release, 0x80, 0x40, true, 0x3de53c574806acb0)
#else
#define _m00
#define _m01
#define _m02
#endif