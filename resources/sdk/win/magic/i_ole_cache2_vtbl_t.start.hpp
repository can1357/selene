#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, const struct nt::guid_t*, void**)>*), "IOleCache2Vtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x37f56af1dc9acd3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_cache2_t*)>*), "IOleCache2Vtbl.AddRef", add_ref, 0x40, 0x40, true, 0xb85848682c6a4c73)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_ole_cache2_t*)>*), "IOleCache2Vtbl.Release", release, 0x80, 0x40, true, 0xd8bc79099a00802b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct tag::formatetc_t*, uint32_t, uint32_t*)>*), "IOleCache2Vtbl.Cache", cache, 0xc0, 0x40, true, 0xbf54769f71d64c7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, uint32_t)>*), "IOleCache2Vtbl.Uncache", uncache, 0x100, 0x40, true, 0x1718af459bb82a3a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_enum_statdata_t**)>*), "IOleCache2Vtbl.EnumCache", enum_cache, 0x140, 0x40, true, 0xe5ae7831a54f0383)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_data_object_t*)>*), "IOleCache2Vtbl.InitCache", init_cache, 0x180, 0x40, true, 0xbbeaf15087424b6d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*, int32_t)>*), "IOleCache2Vtbl.SetData", set_data, 0x1c0, 0x40, true, 0xa9db36522f2fdb6a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_data_object_t*, uint32_t, void*)>*), "IOleCache2Vtbl.UpdateCache", update_cache, 0x200, 0x40, true, 0x9d8a366b567ef8ad)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, uint32_t)>*), "IOleCache2Vtbl.DiscardCache", discard_cache, 0x240, 0x40, true, 0x853d59b5bb2a0dc3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif