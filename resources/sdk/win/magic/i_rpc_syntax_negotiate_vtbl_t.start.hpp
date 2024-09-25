#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_syntax_negotiate_t*, const struct nt::guid_t&, void**)>*), "IRpcSyntaxNegotiateVtbl.QueryInterface", query_interface, 0x0, 0x40, true, 0x4b707a22e9765439)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_syntax_negotiate_t*)>*), "IRpcSyntaxNegotiateVtbl.AddRef", add_ref, 0x40, 0x40, true, 0x176e0458c386859)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct win::i_rpc_syntax_negotiate_t*)>*), "IRpcSyntaxNegotiateVtbl.Release", release, 0x80, 0x40, true, 0x673bc75699cd07e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct win::i_rpc_syntax_negotiate_t*, struct tag::rpcolemessage_t*)>*), "IRpcSyntaxNegotiateVtbl.NegotiateSyntax", negotiate_syntax, 0xc0, 0x40, true, 0x2ce7fc17fe39a8cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif