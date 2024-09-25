#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_stub_header_t), "tagCInterfaceStubVtbl.header", header, 0x0, 0x0, true, 0xfaeb6cac49d9a78a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_stub_buffer_vtbl_t), "tagCInterfaceStubVtbl.Vtbl", vtbl, 0x100, 0x80, true, 0x865c7d958da524de)
#else
#define _m00
#define _m01
#endif