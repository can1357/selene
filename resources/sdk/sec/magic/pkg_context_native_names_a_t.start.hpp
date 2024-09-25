#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_NativeNamesA.sClientName", s_client_name, 0x0, 0x40, true, 0x9b98412e922103ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_NativeNamesA.sServerName", s_server_name, 0x40, 0x40, true, 0x4bd13ad078ceb32a)
#else
#define _m00
#define _m01
#endif