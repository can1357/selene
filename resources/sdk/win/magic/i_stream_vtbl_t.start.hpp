#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, const struct nt::guid_t*, void**)>*), "IStreamVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x174903b50c1538b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_stream_t*)>*), "IStreamVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xc369f066ef2a6715)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_stream_t*)>*), "IStreamVtbl.Release", release, 0x80, 0x40, true, 0x2f3a82d97c5cc64f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, void*, uint32_t, uint32_t*)>*), "IStreamVtbl.Read", read, 0xc0, 0x40, true, 0x25d830523d825139)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, const void*, uint32_t, uint32_t*)>*), "IStreamVtbl.Write", write, 0x100, 0x40, true, 0x488b97831b5e5243)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, int64_t, uint32_t, uint64_t*)>*), "IStreamVtbl.Seek", seek, 0x140, 0x40, true, 0x983952238f2e0e12)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t)>*), "IStreamVtbl.SetSize", set_size, 0x180, 0x40, true, 0xfb9e9661f215349e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, struct win::i_stream_t*, uint64_t, uint64_t*, uint64_t*)>*), "IStreamVtbl.CopyTo", copy_to, 0x1c0, 0x40, true, 0xf5121e4c30a3d16b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, uint32_t)>*), "IStreamVtbl.Commit", commit, 0x200, 0x40, true, 0x88aa55042b5d1e46)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_coreleasemarshaldata_t ), "IStreamVtbl.Revert", revert, 0x240, 0x40, true, 0x6d962863e9ed47eb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t, uint64_t, uint32_t)>*), "IStreamVtbl.LockRegion", lock_region, 0x280, 0x40, true, 0xa3cc2beeafb17ddc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t, uint64_t, uint32_t)>*), "IStreamVtbl.UnlockRegion", unlock_region, 0x2c0, 0x40, true, 0xfc9d25bf18576c3b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, struct tag::statstg_t*, uint32_t)>*), "IStreamVtbl.Stat", stat, 0x300, 0x40, true, 0x5114974fb36bc27a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_stream_t*, struct win::i_stream_t**)>*), "IStreamVtbl.Clone", clone, 0x340, 0x40, true, 0xf387c2d525950fda)
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
#endif