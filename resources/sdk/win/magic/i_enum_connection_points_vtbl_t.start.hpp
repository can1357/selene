#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connection_points_t*, const struct nt::guid_t*, void**)>*), "IEnumConnectionPointsVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xdba15b4bae8b7827)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_connection_points_t*)>*), "IEnumConnectionPointsVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xcc5fa1c863c6ed03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_enum_connection_points_t*)>*), "IEnumConnectionPointsVtbl.Release", release, 0x80, 0x40, true, 0xe839f83bf9825d86)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connection_points_t*, uint32_t, struct win::i_connection_point_t**, uint32_t*)>*), "IEnumConnectionPointsVtbl.Next", next, 0xc0, 0x40, true, 0x4ee39cfea11863ab)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connection_points_t*, uint32_t)>*), "IEnumConnectionPointsVtbl.Skip", skip, 0x100, 0x40, true, 0x7a4f1ee4d9b55fe9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connection_points_t*)>*), "IEnumConnectionPointsVtbl.Reset", reset, 0x140, 0x40, true, 0x33a2e088d8ae72aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_enum_connection_points_t*, struct win::i_enum_connection_points_t**)>*), "IEnumConnectionPointsVtbl.Clone", clone, 0x180, 0x40, true, 0x548b93a9a3b5d5be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif