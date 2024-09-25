#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.Version", version, 0x0, 0x20, true, 0x2dec9a9c1d621ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.Flags", flags, 0x20, 0x20, true, 0xca0ccd61f05eeb59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0x59d3604e9d10b044)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V2_A.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0xf18b4d33861a6e97)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0x3bcb910383d1fde2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V2_A.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0x334e5dd4012d72c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0x4ee3c4b1133fbe16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.AuthenticationService", authentication_service, 0x160, 0x20, true, 0x9133ced8c368b75e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.NullSession", null_session, 0x180, 0x20, true, 0xef14bbe805ca9cff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.KernelModeCaller", kernel_mode_caller, 0x1a0, 0x20, true, 0x93d8de29f291880)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.ProtocolSequence", protocol_sequence, 0x1c0, 0x20, true, 0x79f389ba16346a64)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.IsClientLocal", is_client_local, 0x1e0, 0x20, true, 0xe5f65976bd3adc5e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagRPC_CALL_ATTRIBUTES_V2_A.ClientPID", client_pid, 0x200, 0x40, true, 0x8fbc95ceaeb92f4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V2_A.CallStatus", call_status, 0x240, 0x20, true, 0x31844509dba78692)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::rpc_call_type_t), "tagRPC_CALL_ATTRIBUTES_V2_A.CallType", call_type, 0x260, 0x20, true, 0x9f933b7b488f90c9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::call_local_address_v1_t*), "tagRPC_CALL_ATTRIBUTES_V2_A.CallLocalAddress", call_local_address, 0x280, 0x40, true, 0xf790036ea315c277)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_CALL_ATTRIBUTES_V2_A.OpNum", op_num, 0x2c0, 0x10, true, 0xb1ac8e78870ff254)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagRPC_CALL_ATTRIBUTES_V2_A.InterfaceUuid", interface_uuid, 0x2e0, 0x80, true, 0xc19fc2eb05b75d1c)
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