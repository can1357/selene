#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_CONFIGURATION.Size", size, 0x0, 0x0, false, 0x1c771699cb9edc79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::execution_context_runtime_knobs_t*), "_EXECUTION_CONTEXT_CONFIGURATION.RuntimeKnobs", runtime_knobs, 0x0, 0x0, false, 0xb13432b31f7f21f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_EXECUTION_CONTEXT_CONFIGURATION.ClientIdentifier", client_identifier, 0x0, 0x0, false, 0x8f9ae0218c133ad0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_EXECUTION_CONTEXT_CONFIGURATION.ClientFriendlyName", client_friendly_name, 0x0, 0x0, false, 0x675568ce62c0c2c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif