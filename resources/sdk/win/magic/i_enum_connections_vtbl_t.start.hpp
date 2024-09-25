#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connections_t*, const struct nt::guid_t*, void**)>*), "IEnumConnectionsVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xec0aa7bd279cd4b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_connections_t*)>*), "IEnumConnectionsVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xa1d6a0a1dd6d2c28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_connections_t*)>*), "IEnumConnectionsVtbl.Release", release, 0x80, 0x40, true, 0xba897fac0c51e895)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connections_t*, uint32_t, struct tag::connectdata_t*, uint32_t*)>*), "IEnumConnectionsVtbl.Next", next, 0xc0, 0x40, true, 0x8566d2d7cc8d1672)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connections_t*, uint32_t)>*), "IEnumConnectionsVtbl.Skip", skip, 0x100, 0x40, true, 0xe327e295dc80a77)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connections_t*)>*), "IEnumConnectionsVtbl.Reset", reset, 0x140, 0x40, true, 0x451cc6c2b4f3e89d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connections_t*, struct win::i_enum_connections_t**)>*), "IEnumConnectionsVtbl.Clone", clone, 0x180, 0x40, true, 0xbf169ad71566cba3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif