#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.Version", version, 0x0, 0x20, true, 0xefb7e2af27f16035)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.Flags", flags, 0x20, 0x20, true, 0xee6b40c78f6200c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.ServerPrincipalNameBufferLength", server_principal_name_buffer_length, 0x40, 0x20, true, 0xeadf09f588cc334d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V1_W.ServerPrincipalName", server_principal_name, 0x80, 0x40, true, 0x4fca64d153474496)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.ClientPrincipalNameBufferLength", client_principal_name_buffer_length, 0xc0, 0x20, true, 0x9f839e8a7252f508)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagRPC_CALL_ATTRIBUTES_V1_W.ClientPrincipalName", client_principal_name, 0x100, 0x40, true, 0x717cfaf1a550946c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.AuthenticationLevel", authentication_level, 0x140, 0x20, true, 0x31f2be5a11e7004)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.AuthenticationService", authentication_service, 0x160, 0x20, true, 0xe4e78f0593ba24f7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_CALL_ATTRIBUTES_V1_W.NullSession", null_session, 0x180, 0x20, true, 0x589371a533600928)
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