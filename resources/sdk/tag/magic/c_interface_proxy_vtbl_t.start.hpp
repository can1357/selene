#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::c_interface_proxy_header_t), "tagCInterfaceProxyVtbl.header", header, 0x0, 0x40, true, 0x9cb12a24ebea670c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*>), "tagCInterfaceProxyVtbl.Vtbl", vtbl, 0x40, 0x0, true, 0x146536334f21ad60)
#else
#define _m00
#define _m01
#endif