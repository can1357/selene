#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, const struct nt::guid_t*, void**)>*), "ISequentialStreamVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0xf2d9553ee0b1bb64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_sequential_stream_t*)>*), "ISequentialStreamVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x97c092a4250f3aaf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_sequential_stream_t*)>*), "ISequentialStreamVtbl.Release", release, 0x80, 0x40, true, 0xef5e17fed0ac0528)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, void*, uint32_t, uint32_t*)>*), "ISequentialStreamVtbl.Read", read, 0xc0, 0x40, true, 0x63276efd520d8105)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, const void*, uint32_t, uint32_t*)>*), "ISequentialStreamVtbl.Write", write, 0x100, 0x40, true, 0xf25a918e2716203b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif