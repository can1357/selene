#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_malloc_t*, const struct nt::guid_t&, void**)>*), "IMallocVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x89267a19144e6e09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_malloc_t*)>*), "IMallocVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x86eddcf82e7c4b3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_malloc_t*)>*), "IMallocVtbl.Release", release, 0x80, 0x40, true, 0xcadc416d646cc04)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct win::i_malloc_t*, uint64_t)>*), "IMallocVtbl.Alloc", alloc, 0xc0, 0x40, true, 0xfebe7726674ded0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct win::i_malloc_t*, void*, uint64_t)>*), "IMallocVtbl.Realloc", realloc, 0x100, 0x40, true, 0x95a9e8a1d5025c9b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_malloc_t*, void*)>*), "IMallocVtbl.Free", free, 0x140, 0x40, true, 0x4f1338701699d0cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint64_t(struct win::i_malloc_t*, void*)>*), "IMallocVtbl.GetSize", get_size, 0x180, 0x40, true, 0xdd71f60c27292d1b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct win::i_malloc_t*, void*)>*), "IMallocVtbl.DidAlloc", did_alloc, 0x1c0, 0x40, true, 0x356ac92ff9c60f69)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::i_malloc_t*)>*), "IMallocVtbl.HeapMinimize", heap_minimize, 0x200, 0x40, true, 0x230f2e85d34d811b)
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
#endif