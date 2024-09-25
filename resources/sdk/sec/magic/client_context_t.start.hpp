#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t), "_SECURITY_CLIENT_CONTEXT.SecurityQos", security_qos, 0x0, 0x60, true, 0xe4a25017f6e3bbd2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_CLIENT_CONTEXT.ClientToken", client_token, 0x80, 0x40, true, 0x2a9c117c36d624a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_CLIENT_CONTEXT.DirectlyAccessClientToken", directly_access_client_token, 0xc0, 0x8, true, 0x40d18e1974434447)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_CLIENT_CONTEXT.DirectAccessEffectiveOnly", direct_access_effective_only, 0xc8, 0x8, true, 0xdbe0e8c9e05263cf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_CLIENT_CONTEXT.ServerIsRemote", server_is_remote, 0xd0, 0x8, true, 0x22998cbc8b404714)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::token_control_t), "_SECURITY_CLIENT_CONTEXT.ClientTokenControl", client_token_control, 0xe0, 0x40, true, 0x6c0730163d80fd2f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif