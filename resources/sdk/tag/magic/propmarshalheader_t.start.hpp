#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagPROPMARSHALHEADER.clsid", clsid, 0x0, 0x80, true, 0xfa43ded5ede1a700)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagPROPMARSHALHEADER.policyId", policy_id, 0x80, 0x80, true, 0xb3e1b2c63cb7274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPMARSHALHEADER.flags", flags, 0x100, 0x20, true, 0x148c8730e137d9ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPMARSHALHEADER.cb", cb, 0x120, 0x20, true, 0xc5c2e5f45ce591e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif