#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIV_RESOLVER_INFO.OxidServer", oxid_server, 0x0, 0x40, true, 0x8734d7b3cd36d9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "_PRIV_RESOLVER_INFO.pServerORBindings", p_server_or_bindings, 0x40, 0x40, true, 0xf6263d475d5e5337)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct tag::oxid_info_t, struct win::midl_i_local_object_exporter_0007_t>), "_PRIV_RESOLVER_INFO.OxidInfo", oxid_info, 0x80, 0xc0, true, 0x24e8a6a5ec04da3f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIV_RESOLVER_INFO.LocalMidOfRemote", local_mid_of_remote, 0x540, 0x40, true, 0x55d829f6469e32cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PRIV_RESOLVER_INFO.FoundInROT", found_in_rot, 0x600, 0x20, true, 0x5b87e51bbbf9b1a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIV_RESOLVER_INFO.DllServerModel", dll_server_model, 0x580, 0x20, true, 0xbac1a167b45f6800)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PRIV_RESOLVER_INFO.pwszDllServer", pwsz_dll_server, 0x5c0, 0x40, true, 0xa8b4693c9440c185)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif