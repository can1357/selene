#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_get_server_info_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtGetCallMethod", ndr_ext_get_call_method, 0x0, 0x40, true, 0x41cf450ad705f9d0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtGetServerObject", ndr_ext_get_server_object, 0x40, 0x40, true, 0x4bd0dc27f3cb9482)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_stub_init_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtStubInitialize", ndr_ext_stub_initialize, 0x80, 0x40, true, 0xbb1f2ccf74627803)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_stub_get_buffer_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtStubGetBuffer", ndr_ext_stub_get_buffer, 0xc0, 0x40, true, 0xeee7eb8aed9939e4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_dcomchannelsethresult_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtSetErrorStatus", ndr_ext_set_error_status, 0x100, 0x40, true, 0x48121613db9b16a6)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_dcomchannelsetclienthresult_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtSetClientErrorStatus", ndr_ext_set_client_error_status, 0x140, 0x40, true, 0x9271954c040184ff)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_ip_buffsize_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtInterfacePointerBufferSize", ndr_ext_interface_pointer_buffer_size, 0x180, 0x40, true, 0xc707e90275a152a1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_proxy_init_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtProxyInitialize", ndr_ext_proxy_initialize, 0x1c0, 0x40, true, 0x61b1cfc700e395bc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtFreeInterfacePointer", ndr_ext_free_interface_pointer, 0x200, 0x40, true, 0x7cf980de8e3c2f52)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_ip_memsize_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtInterfacePointerMemorySize", ndr_ext_interface_pointer_memory_size, 0x240, 0x40, true, 0xf31a3fa3d4a0a854)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_ip_mrshl_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtInterfacePointerMarshall", ndr_ext_interface_pointer_marshall, 0x280, 0x40, true, 0x15762b788bb3c491)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_ip_unmrshl_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtInterfacePointerUnmarshall", ndr_ext_interface_pointer_unmarshall, 0x2c0, 0x40, true, 0x9e05f96e798c8819)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_check_wire_format_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtGetUDTFormat", ndr_ext_get_udt_format, 0x300, 0x40, true, 0xf4514aca6f9ed5a8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtProxyGetBuffer", ndr_ext_proxy_get_buffer, 0x340, 0x40, true, 0xcbacedf002db4d9f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtProxySendReceive", ndr_ext_proxy_send_receive, 0x380, 0x40, true, 0xd40ae109774a5d83)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtFreeBuffer", ndr_ext_free_buffer, 0x3c0, 0x40, true, 0xfd2ec969b3f982ba)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(struct win::midl_stub_message_t*, struct rpc::version_t*)>*, sdk::function<sdk::hresult(struct win::midl_stub_message_t*, struct rpc::version_t*)>*>), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtGetComProtocolVersion", ndr_ext_get_com_protocol_version, 0x400, 0x40, true, 0x1ed8e47822c6b1ce)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_system_handle_marshall_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtSystemHandleMarshall", ndr_ext_system_handle_marshall, 0x440, 0x40, true, 0x118f71ce5fa63683)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_system_handle_unmarshall_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtSystemHandleUnmarshall", ndr_ext_system_handle_unmarshall, 0x480, 0x40, true, 0x46af0e05d179f1e4)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_free_system_handle_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtFreeSystemHandle", ndr_ext_free_system_handle, 0x4c0, 0x40, true, 0x3d59813c4efb96d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtChkSystemHandleLeak", ndr_ext_chk_system_handle_leak, 0x500, 0x40, true, 0x42ebf93b5e36f0e0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtCleanupAllSystemHandles", ndr_ext_cleanup_all_system_handles, 0x540, 0x40, true, 0x7c3875b290c39dd9)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, uint8_t*, const void*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.Ndr64ExtInterfacePointerBufferSize", ndr64_ext_interface_pointer_buffer_size, 0x600, 0x40, true, 0x65dcb6059e309b60)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, const void*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.Ndr64ExtInterfacePointerMemorySize", ndr64_ext_interface_pointer_memory_size, 0x640, 0x40, true, 0x663c4f30ab8159ed)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct win::midl_stub_message_t*, uint8_t*, const void*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.Ndr64ExtInterfacePointerMarshall", ndr64_ext_interface_pointer_marshall, 0x680, 0x40, true, 0xc29c066f94b6adf5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole64_ip_unmrshl_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.Ndr64ExtInterfacePointerUnmarshall", ndr64_ext_interface_pointer_unmarshall, 0x6c0, 0x40, true, 0xe8b6df22c1829311)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole64_proxy_init_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.Ndr64ExtProxyInitialize", ndr64_ext_proxy_initialize, 0x700, 0x40, true, 0x139dbb5a0dc6b010)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole64_dcom_client_interface_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtSetupClientInterface", ndr_ext_setup_client_interface, 0x740, 0x40, true, 0x6e95a425432ea5d7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole64_dcom_neg_syntax_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtNegotiateTransferSyntax", ndr_ext_negotiate_transfer_syntax, 0x780, 0x40, true, 0x64941991a341c7bd)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct win::midl_stub_message_t*)>*), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtInitializeCallObject", ndr_ext_initialize_call_object, 0x580, 0x40, true, 0xe117f3634d2c587a)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ndrole_use_fixed_wire_rep_for_interface_pointer_array_and_embedded_conformant_struct_t ), "_NDROLE_EXTENSION_ROUTINES_TABLE.NdrExtUseFixedWireRepForInterfacePointerArrayAndEmbeddedConformantStruct", ndr_ext_use_fixed_wire_rep_for_interface_pointer_array_and_embedded_conformant_struct, 0x5c0, 0x40, true, 0x10fc0208e0a9d9d6)
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
#define _m028
#define _m029
#define _m030
#endif