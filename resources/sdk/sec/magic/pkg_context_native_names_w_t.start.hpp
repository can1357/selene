#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_NativeNamesW.sClientName", s_client_name, 0x0, 0x40, true, 0xee70ae1830f850f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_NativeNamesW.sServerName", s_server_name, 0x40, 0x40, true, 0xb5d50530ec276c52)
#else
#define _m00
#define _m01
#endif