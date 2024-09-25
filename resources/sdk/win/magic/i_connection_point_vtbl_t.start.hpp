#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, const struct nt::guid_t*, void**)>*), "IConnectionPointVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xc56d107535ee655a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_connection_point_t*)>*), "IConnectionPointVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xd5c57be1ed62f51b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_connection_point_t*)>*), "IConnectionPointVtbl.Release", release, 0x80, 0x40, true, 0x6bd96c4a5748a1ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct nt::guid_t*)>*), "IConnectionPointVtbl.GetConnectionInterface", get_connection_interface, 0xc0, 0x40, true, 0x30c34ab5bfbeb1f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_connection_point_container_t**)>*), "IConnectionPointVtbl.GetConnectionPointContainer", get_connection_point_container, 0x100, 0x40, true, 0x28cd725e092588f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_unknown_t*, uint32_t*)>*), "IConnectionPointVtbl.Advise", advise, 0x140, 0x40, true, 0x3aa06ceb2da4d01f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, uint32_t)>*), "IConnectionPointVtbl.Unadvise", unadvise, 0x180, 0x40, true, 0xf58b6f11a5e853d5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_enum_connections_t**)>*), "IConnectionPointVtbl.EnumConnections", enum_connections, 0x1c0, 0x40, true, 0x5d5ac2ef1413d4a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif