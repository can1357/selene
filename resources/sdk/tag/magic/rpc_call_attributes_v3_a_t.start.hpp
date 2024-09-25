#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.Version", version, 0x0, 0x20, true, 0xfedfd94a04083998)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.Flags", flags, 0x20, 0x20, true, 0xf50f4d64cd617e78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0x2690f6abc24daa18)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V3_A.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0x1ac516d74378f1b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0x916501f967b93632)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V3_A.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0x41e548e88699af2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0x5f45312ad207367a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.AuthenticationService", authentication_service, 0x160, 0x20, true, 0xe21754fd1b1112f0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.NullSession", null_session, 0x180, 0x20, true, 0x53956e1d45725fac)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.KernelModeCaller", kernel_mode_caller, 0x1a0, 0x20, true, 0x4cada665787ee322)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.ProtocolSequence", protocol_sequence, 0x1c0, 0x20, true, 0xcf9acd7588fe7d2e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.IsClientLocal", is_client_local, 0x1e0, 0x20, true, 0x5015fbbcdce84f8a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_CALL_ATTRIBUTES_V3_A.ClientPID", client_pid, 0x200, 0x40, true, 0x52620683aaa8ba86)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.CallStatus", call_status, 0x240, 0x20, true, 0x772fb50f8c761bda)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_type_t), "tagRPC_CALL_ATTRIBUTES_V3_A.CallType", call_type, 0x260, 0x20, true, 0xf0455169d9a77ed9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::call_local_address_v1_t*), "tagRPC_CALL_ATTRIBUTES_V3_A.CallLocalAddress", call_local_address, 0x280, 0x40, true, 0x69ab0b346bac037d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_CALL_ATTRIBUTES_V3_A.OpNum", op_num, 0x2c0, 0x10, true, 0xd98acfcf80d74b7c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagRPC_CALL_ATTRIBUTES_V3_A.InterfaceUuid", interface_uuid, 0x2e0, 0x80, true, 0x4273cc94b0b2989e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V3_A.ClientIdentifierBufferLength", client_identifier_buffer_length, 0x360, 0x20, true, 0x513dd201489c185c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V3_A.ClientIdentifier", client_identifier, 0x380, 0x40, true, 0xd6b462dbe51a873f)
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