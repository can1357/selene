#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, const struct nt::guid_t*, void**)>*), "ILockBytesVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x48a4820aa1f066e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_lock_bytes_t*)>*), "ILockBytesVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x249b6f13c4c4ecf4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_lock_bytes_t*)>*), "ILockBytesVtbl.Release", release, 0x80, 0x40, true, 0x1a0837e3f59b37da)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, void*, uint32_t, uint32_t*)>*), "ILockBytesVtbl.ReadAt", read_at, 0xc0, 0x40, true, 0x2b0788959d308f0d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, const void*, uint32_t, uint32_t*)>*), "ILockBytesVtbl.WriteAt", write_at, 0x100, 0x40, true, 0x7ce1f61dbf61c503)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*)>*), "ILockBytesVtbl.Flush", flush, 0x140, 0x40, true, 0xd7e61a2d6f97fa4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t)>*), "ILockBytesVtbl.SetSize", set_size, 0x180, 0x40, true, 0xd559b874d695c764)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, uint64_t, uint32_t)>*), "ILockBytesVtbl.LockRegion", lock_region, 0x1c0, 0x40, true, 0x9e80491977353d09)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, uint64_t, uint32_t)>*), "ILockBytesVtbl.UnlockRegion", unlock_region, 0x200, 0x40, true, 0x9859850ce1dbc52e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, struct tag::statstg_t*, uint32_t)>*), "ILockBytesVtbl.Stat", stat, 0x240, 0x40, true, 0x7408623c1b11100f)
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