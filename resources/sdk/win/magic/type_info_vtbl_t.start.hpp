#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "TypeInfoVtbl.cRefs", c_refs, 0x0, 0x20, true, 0x461c3eb1d61bd68c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "TypeInfoVtbl.iid", iid, 0x20, 0x80, true, 0x5e1cf2caf1cdf64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "TypeInfoVtbl.fIsDual", f_is_dual, 0xa0, 0x20, true, 0xfeacc1ae25bb6eb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_desc_t), "TypeInfoVtbl.stubDesc", stub_desc, 0xc0, 0xc0, true, 0xc71a747c4080c2bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_server_info_t), "TypeInfoVtbl.stubInfo", stub_info, 0x580, 0x0, true, 0xab9c5d36cf02db4a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_stub_vtbl_t), "TypeInfoVtbl.stubVtbl", stub_vtbl, 0x780, 0x80, true, 0x2db157d99c9ab1e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stubless_proxy_info_t), "TypeInfoVtbl.proxyInfo", proxy_info, 0xb00, 0x80, true, 0x13bfc818528382a3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_proxy_vtbl_t), "TypeInfoVtbl.proxyVtbl", proxy_vtbl, 0xc80, 0x40, true, 0x6c463a45aa903a97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif