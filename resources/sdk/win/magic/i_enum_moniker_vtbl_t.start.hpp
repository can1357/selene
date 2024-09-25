#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_moniker_t*, const struct nt::guid_t*, void**)>*), "IEnumMonikerVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x6da05327f8832512)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_moniker_t*)>*), "IEnumMonikerVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x56a1d61e080871b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_moniker_t*)>*), "IEnumMonikerVtbl.Release", release, 0x80, 0x40, true, 0xf79135e916d3bcb4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_moniker_t*, uint32_t, struct win::i_moniker_t**, uint32_t*)>*), "IEnumMonikerVtbl.Next", next, 0xc0, 0x40, true, 0xb84eba47871ae315)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_moniker_t*, uint32_t)>*), "IEnumMonikerVtbl.Skip", skip, 0x100, 0x40, true, 0x633f6c750c200187)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_moniker_t*)>*), "IEnumMonikerVtbl.Reset", reset, 0x140, 0x40, true, 0xe5eb8b0c92d929ad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_moniker_t*, struct win::i_enum_moniker_t**)>*), "IEnumMonikerVtbl.Clone", clone, 0x180, 0x40, true, 0xe4533067ed61bdee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif