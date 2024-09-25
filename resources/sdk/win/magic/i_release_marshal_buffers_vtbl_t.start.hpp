#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_release_marshal_buffers_t*, const struct nt::guid_t&, void**)>*), "IReleaseMarshalBuffersVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x4905bdfc2b0895e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_release_marshal_buffers_t*)>*), "IReleaseMarshalBuffersVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x6ac9046a39dafcb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_release_marshal_buffers_t*)>*), "IReleaseMarshalBuffersVtbl.Release", release, 0x80, 0x40, true, 0x1f3ebf607ac8d9d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_release_marshal_buffers_t*, struct tag::rpcolemessage_t*, uint32_t, struct win::i_unknown_t*)>*), "IReleaseMarshalBuffersVtbl.ReleaseMarshalBuffer", release_marshal_buffer, 0xc0, 0x40, true, 0x38fcbe7651e0ad59)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif