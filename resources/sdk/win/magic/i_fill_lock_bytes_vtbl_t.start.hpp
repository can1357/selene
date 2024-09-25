#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, const struct nt::guid_t*, void**)>*), "IFillLockBytesVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xd7d3a96f7f5e06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_fill_lock_bytes_t*)>*), "IFillLockBytesVtbl.AddRef", add_ref, 0x40, 0x40, true, 0xa6d8495b51e8ce79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_fill_lock_bytes_t*)>*), "IFillLockBytesVtbl.Release", release, 0x80, 0x40, true, 0xf47ba1af8280ae8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, const void*, uint32_t, uint32_t*)>*), "IFillLockBytesVtbl.FillAppend", fill_append, 0xc0, 0x40, true, 0x83cc4b7476cecabf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, uint64_t, const void*, uint32_t, uint32_t*)>*), "IFillLockBytesVtbl.FillAt", fill_at, 0x100, 0x40, true, 0xbb1d27d73c44244a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, uint64_t)>*), "IFillLockBytesVtbl.SetFillSize", set_fill_size, 0x140, 0x40, true, 0x25c7254c24d76488)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, int32_t)>*), "IFillLockBytesVtbl.Terminate", terminate, 0x180, 0x40, true, 0xc7796b25b6bca5a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif