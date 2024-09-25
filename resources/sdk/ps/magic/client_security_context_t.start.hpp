#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CLIENT_SECURITY_CONTEXT.ImpersonationData", impersonation_data, 0x0, 0x40, true, 0xdea46ce8e3a6c4aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_CLIENT_SECURITY_CONTEXT.ImpersonationToken", impersonation_token, 0x0, 0x40, true, 0xeac95b2c14366fb7)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PS_CLIENT_SECURITY_CONTEXT.ImpersonationLevel", impersonation_level, 0x0, 0x2, true, 0xaa75f9601ef8f370, 2, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CLIENT_SECURITY_CONTEXT.EffectiveOnly", effective_only, 0x2, 0x1, true, 0x44388ea608e933f1, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif