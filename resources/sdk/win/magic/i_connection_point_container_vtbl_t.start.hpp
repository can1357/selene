#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, const struct nt::guid_t*, void**)>*), "IConnectionPointContainerVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x534aaa94e075e36f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_connection_point_container_t*)>*), "IConnectionPointContainerVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x83bbab99ea83c536)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_connection_point_container_t*)>*), "IConnectionPointContainerVtbl.Release", release, 0x80, 0x40, true, 0x3d782516dcaecd4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, struct win::i_enum_connection_points_t**)>*), "IConnectionPointContainerVtbl.EnumConnectionPoints", enum_connection_points, 0xc0, 0x40, true, 0xedce450f1ce05c9b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, const struct nt::guid_t*, struct win::i_connection_point_t**)>*), "IConnectionPointContainerVtbl.FindConnectionPoint", find_connection_point, 0x100, 0x40, true, 0xb71f62020e98a2a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif