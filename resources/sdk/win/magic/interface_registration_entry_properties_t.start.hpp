#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "InterfaceRegistrationEntryProperties.InterfaceName", interface_name, 0x0, 0x40, true, 0x1368bfd7c2bf246b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "InterfaceRegistrationEntryProperties.ProxyStubCLSID", proxy_stub_clsid, 0x40, 0x40, true, 0x2a959e11360e9595)
#else
#define _m00
#define _m01
#endif