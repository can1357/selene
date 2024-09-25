#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.Version", version, 0x0, 0x20, true, 0xfc1df7ba10cdc372)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.Flags", flags, 0x20, 0x20, true, 0xb35c20ae2a197c81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0xea9e8d15acf5b199)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V3_W.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0x7babfabead887be8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0x23607718b238c5fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V3_W.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0x477cd06d8661478a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0xf2428e41e5d0b2a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.AuthenticationService", authentication_service, 0x160, 0x20, true, 0xf7296a6882f37963)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.NullSession", null_session, 0x180, 0x20, true, 0xe964bea8fe64992c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.KernelModeCaller", kernel_mode_caller, 0x1a0, 0x20, true, 0x6ead6a14c7a62acf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.ProtocolSequence", protocol_sequence, 0x1c0, 0x20, true, 0xb380ae378f7ffe24)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_client_locality_t), "tagRPC_CALL_ATTRIBUTES_V3_W.IsClientLocal", is_client_local, 0x1e0, 0x20, true, 0xa86d67364e65fa8b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_CALL_ATTRIBUTES_V3_W.ClientPID", client_pid, 0x200, 0x40, true, 0xe08f5c93140c634b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.CallStatus", call_status, 0x240, 0x20, true, 0xf94be84f393e86a7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_type_t), "tagRPC_CALL_ATTRIBUTES_V3_W.CallType", call_type, 0x260, 0x20, true, 0x939cf8f7707bedae)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::call_local_address_v1_t*), "tagRPC_CALL_ATTRIBUTES_V3_W.CallLocalAddress", call_local_address, 0x280, 0x40, true, 0xa2d644d5014a6196)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_CALL_ATTRIBUTES_V3_W.OpNum", op_num, 0x2c0, 0x10, true, 0x87aee7daa5c3e93e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagRPC_CALL_ATTRIBUTES_V3_W.InterfaceUuid", interface_uuid, 0x2e0, 0x80, true, 0x4a6181f637d39be5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_W.ClientIdentifierBufferLength", client_identifier_buffer_length, 0x360, 0x20, true, 0x4b954aceccc3fb6e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V3_W.ClientIdentifier", client_identifier, 0x380, 0x40, true, 0x6daf4930c1c61ba4)
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
#define _m18
#define _m19
#endif