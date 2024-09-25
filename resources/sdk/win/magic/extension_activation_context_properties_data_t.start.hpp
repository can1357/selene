#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ExtensionActivationContextPropertiesData.hostId", host_id, 0x0, 0x40, true, 0x734a96ad2b4f7c4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::user_context_properties_data_t), "ExtensionActivationContextPropertiesData.userContextProperties", user_context_properties, 0x40, 0x40, true, 0x44b68f73e9bc7a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ExtensionActivationContextPropertiesData.componentProcessId", component_process_id, 0x80, 0x80, true, 0xe9fae8b784003179)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ExtensionActivationContextPropertiesData.racActivationTokenId", rac_activation_token_id, 0x100, 0x40, true, 0xb42f4e213f43b962)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::blob_t*), "ExtensionActivationContextPropertiesData.lpacAttributes", lpac_attributes, 0x140, 0x40, true, 0xfe12193bb08804c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ExtensionActivationContextPropertiesData.consoleHandlesId", console_handles_id, 0x180, 0x40, true, 0x864b42720fd069fb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ExtensionActivationContextPropertiesData.aamActivationId", aam_activation_id, 0x1c0, 0x40, true, 0xd6810ce4bd2c1cb2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ExtensionActivationContextPropertiesData.runFullTrust", run_full_trust, 0x200, 0x20, true, 0x270325bca3f55058)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif