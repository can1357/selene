#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ActivationContext._hostId", host_id, 0x200, 0x40, true, 0x4311b4709ab9a6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ActivationContext._userContext", user_context, 0x240, 0x40, true, 0x59dbc45f7327feae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ActivationContext._componentProcessId", component_process_id, 0x280, 0x80, true, 0x9f150b79f84e6e8b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ActivationContext._racActivationTokenId", rac_activation_token_id, 0x300, 0x40, true, 0xce01c6e64412cf49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "ActivationContext._aamActivationId", aam_activation_id, 0x380, 0x40, true, 0xc6a0d71625dac47b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif