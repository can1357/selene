#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCustomPrivResolverInfo.OxidServer", oxid_server, 0x0, 0x40, true, 0x11eacaf3489792b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "tagCustomPrivResolverInfo.pServerORBindings", p_server_or_bindings, 0x40, 0x40, true, 0x41c7c3a4024d508f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct tag::oxid_info_t, struct win::midl_i_local_object_exporter_0007_t>), "tagCustomPrivResolverInfo.OxidInfo", oxid_info, 0x80, 0xc0, true, 0x3c00a5325a8e06b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCustomPrivResolverInfo.LocalMidOfRemote", local_mid_of_remote, 0x540, 0x40, true, 0xe00ac62a1e67a96)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCustomPrivResolverInfo.FoundInROT", found_in_rot, 0x600, 0x20, true, 0xbd6ed01fcefd5cfc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCustomPrivResolverInfo.DllServerModel", dll_server_model, 0x580, 0x20, true, 0x4b85397d4cf08e0c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagCustomPrivResolverInfo.pwszDllServer", pwsz_dll_server, 0x5c0, 0x40, true, 0x72cf44a5e1648473)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif