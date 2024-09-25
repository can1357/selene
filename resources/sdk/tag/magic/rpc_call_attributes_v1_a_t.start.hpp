#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.Version", version, 0x0, 0x20, true, 0x815d79d6eab53037)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.Flags", flags, 0x20, 0x20, true, 0xb0e5da8df22e4f4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0x728073783af66f14)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V1_A.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0x6501f7c46893643b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0xfcc303ed82e31506)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagRPC_CALL_ATTRIBUTES_V1_A.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0x4d07f53f95fc0681)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0x18bd4262703bf7e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.AuthenticationService", authentication_service, 0x160, 0x20, true, 0xe598bcbe7e8e1249)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V1_A.NullSession", null_session, 0x180, 0x20, true, 0x7986e7b10e727ae5)
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
#endif