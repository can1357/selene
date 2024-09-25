#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "OXIDEntry._flink", flink, 0x0, 0x40, true, 0xf46f7770d54978c5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "OXIDEntry._blink", blink, 0x40, 0x40, true, 0xf0222f28181a7057)
#define _m002 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint64_t), "OXIDEntry._mid", mid, 0x580, 0x40, true, 0x34290524668f1ab2, 64, uint64_t)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "OXIDEntry._ipidRundown", ipid_rundown, 0x5c0, 0x80, true, 0x2c59d0c3ea092c75)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "OXIDEntry._moxid", moxid, 0x640, 0x80, true, 0xabee65b90c3d61d3)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "OXIDEntry._hServerSTA", h_server_sta, 0x700, 0x40, true, 0x1bbf72d5b6e350d3)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_com_apartment_t*), "OXIDEntry._pParentApt", p_parent_apt, 0x740, 0x40, true, 0x41389392c877e6e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_channel_handle_t volatile*), "OXIDEntry._pSharedDefaultHandle", p_shared_default_handle, 0x780, 0x40, true, 0x540347d87b6024de)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "OXIDEntry._pAuthId", p_auth_id, 0x7c0, 0x40, true, 0x14ef957552b25e13)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwAuthnSvc", dw_authn_svc, 0x800, 0x20, true, 0xf4385312383ad536)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::mid_entry_t*), "OXIDEntry._pMIDEntry", p_mid_entry, 0x840, 0x40, true, 0xd4031abe38b8107c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rem_unknown_t*), "OXIDEntry._pRUSTA", p_rusta, 0x880, 0x40, true, 0x7b465880cdbe7a0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._cRefs", c_refs, 0x8c0, 0x20, true, 0x6ae37f2ec9527a3b)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "OXIDEntry._hComplete", h_complete, 0x900, 0x40, true, 0xdf137a6add1c8217)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "OXIDEntry._cCalls", c_calls, 0x940, 0x20, true, 0x75d90927da4d6bbb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "OXIDEntry._cResolverRef", c_resolver_ref, 0x960, 0x20, true, 0x97f8801d511efb9b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwExpiredTime", dw_expired_time, 0x980, 0x20, true, 0x83937436ba87dc01)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "OXIDEntry._pAppContainerServerSecurityDescriptor", p_app_container_server_security_descriptor, 0x9c0, 0x40, true, 0x83f662cb40a77748)
#define _m018 _SDK_MAGIC_BITFIELD(add_c_t, _SDK_ESCAPE(const uint32_t), "OXIDEntry._ulMarshaledTargetInfoLength", ul_marshaled_target_info_length, 0xa00, 0x20, true, 0xf01dbceb85c850b0, 32, uint32_t)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OXIDEntry.m_isInList", m_is_in_list, 0x80, 0x8, true, 0x7c32ab01ea8a547e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwPid", dw_pid, 0x0, 0x0, false, 0x9ca57b80c813b7b5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwTid", dw_tid, 0x0, 0x0, false, 0xc0a44435ae6ad289)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwFlags", dw_flags, 0x0, 0x0, false, 0x226b828288ed1069)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dualstringarray_t*), "OXIDEntry._pBinding", p_binding, 0x0, 0x0, false, 0x45dfc5fdf27925c9)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OXIDEntry._dwAuthnHint", dw_authn_hint, 0x0, 0x0, false, 0xcbc8018a1b108be4)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "OXIDEntry._version", version, 0x0, 0x0, false, 0x3db86e0fef950dbf)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "OXIDEntry._pszServerPackageFullName", psz_server_package_full_name, 0x0, 0x0, false, 0xe72ca0f9c0ed3f7e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "OXIDEntry._guidProcessIdentifier", guid_process_identifier, 0x0, 0x0, false, 0x770b0c0fc35934a3)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif