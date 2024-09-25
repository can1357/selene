#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.Version", version, 0x0, 0x20, true, 0x2b7a235b9ff1ba7a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.Flags", flags, 0x20, 0x20, true, 0xb5b39ac8ad432125)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0xbd8127157bdb87bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V2_W.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0x2586b922e3c8c17d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0x7410aa9134fcabb2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V2_W.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0xd3c49ca3dfe125a8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0x785ad229e0785e12)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.AuthenticationService", authentication_service, 0x160, 0x20, true, 0xe0861da35b65df08)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.NullSession", null_session, 0x180, 0x20, true, 0x375d9fbc1f3a21e5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.KernelModeCaller", kernel_mode_caller, 0x1a0, 0x20, true, 0x357333d6519b7e8e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.ProtocolSequence", protocol_sequence, 0x1c0, 0x20, true, 0xb521d1dd7b850d28)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_client_locality_t), "tagRPC_CALL_ATTRIBUTES_V2_W.IsClientLocal", is_client_local, 0x1e0, 0x20, true, 0x8e71d34e9254a2cd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_CALL_ATTRIBUTES_V2_W.ClientPID", client_pid, 0x200, 0x40, true, 0xc36f20fb1316aed0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_W.CallStatus", call_status, 0x240, 0x20, true, 0x612102b3e1f8c630)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_type_t), "tagRPC_CALL_ATTRIBUTES_V2_W.CallType", call_type, 0x260, 0x20, true, 0x7b59f72fab71d0b5)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::call_local_address_v1_t*), "tagRPC_CALL_ATTRIBUTES_V2_W.CallLocalAddress", call_local_address, 0x280, 0x40, true, 0x75f6e7137679a63c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_CALL_ATTRIBUTES_V2_W.OpNum", op_num, 0x2c0, 0x10, true, 0x168969e8560d7dfd)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagRPC_CALL_ATTRIBUTES_V2_W.InterfaceUuid", interface_uuid, 0x2e0, 0x80, true, 0x54051911597e58c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif