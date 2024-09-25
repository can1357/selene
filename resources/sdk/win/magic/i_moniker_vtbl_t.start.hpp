#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*), "IMonikerVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x830556b39d35ee2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_moniker_t*)>*), "IMonikerVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x220fcb689f9ae7e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_moniker_t*)>*), "IMonikerVtbl.Release", release, 0x80, 0x40, true, 0x6d8c4038916198f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct nt::guid_t*)>*), "IMonikerVtbl.GetClassID", get_class_id, 0xc0, 0x40, true, 0xbcf9ccf58a1a1c9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*)>*), "IMonikerVtbl.IsDirty", is_dirty, 0x100, 0x40, true, 0x8488373eec156154)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_stream_t*)>*), "IMonikerVtbl.Load", load, 0x140, 0x40, true, 0xf067b3581bd7e0af)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_stream_t*, int32_t)>*), "IMonikerVtbl.Save", save, 0x180, 0x40, true, 0x33366eadac2b6c25)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, uint64_t*)>*), "IMonikerVtbl.GetSizeMax", get_size_max, 0x1c0, 0x40, true, 0xa6fb8b7395f760bc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*), "IMonikerVtbl.BindToObject", bind_to_object, 0x200, 0x40, true, 0xdcb04c80c33e04b8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*), "IMonikerVtbl.BindToStorage", bind_to_storage, 0x240, 0x40, true, 0xea7de61799dd0650)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, uint32_t, struct win::i_moniker_t**, struct win::i_moniker_t**)>*), "IMonikerVtbl.Reduce", reduce, 0x280, 0x40, true, 0x4aaba0693b5e77af)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, int32_t, struct win::i_moniker_t**)>*), "IMonikerVtbl.ComposeWith", compose_with, 0x2c0, 0x40, true, 0x7748b6ab6ab6b05b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, int32_t, struct win::i_enum_moniker_t**)>*), "IMonikerVtbl.Enum", _enum, 0x300, 0x40, true, 0x4835fcea58cf2085)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*)>*), "IMonikerVtbl.IsEqual", is_equal, 0x340, 0x40, true, 0x849adbd0f5270fda)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, uint32_t*)>*), "IMonikerVtbl.Hash", hash, 0x380, 0x40, true, 0x4761039eac6b0925)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, struct win::i_moniker_t*)>*), "IMonikerVtbl.IsRunning", is_running, 0x3c0, 0x40, true, 0xdb39abb298991ab)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, struct win::filetime_t*)>*), "IMonikerVtbl.GetTimeOfLastChange", get_time_of_last_change, 0x400, 0x40, true, 0x46a490b025d351bb)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t**)>*), "IMonikerVtbl.Inverse", inverse, 0x440, 0x40, true, 0x115acc6b8900ac2a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, struct win::i_moniker_t**)>*), "IMonikerVtbl.CommonPrefixWith", common_prefix_with, 0x480, 0x40, true, 0x627f523a3675dbb5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, struct win::i_moniker_t**)>*), "IMonikerVtbl.RelativePathTo", relative_path_to, 0x4c0, 0x40, true, 0x768b61abda9ce1a6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, wchar_t**)>*), "IMonikerVtbl.GetDisplayName", get_display_name, 0x500, 0x40, true, 0xe848bafa9a0ead7b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, wchar_t*, uint32_t*, struct win::i_moniker_t**)>*), "IMonikerVtbl.ParseDisplayName", parse_display_name, 0x540, 0x40, true, 0x1df47b585096b82d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_moniker_t*, uint32_t*)>*), "IMonikerVtbl.IsSystemMoniker", is_system_moniker, 0x580, 0x40, true, 0xf59c75841148d277)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif