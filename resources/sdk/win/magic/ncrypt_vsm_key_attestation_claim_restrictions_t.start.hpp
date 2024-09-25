#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.Version", version, 0x0, 0x20, true, 0xd1287cc66c555fb7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.TrustletId", trustlet_id, 0x40, 0x40, true, 0x45a2ffb5dd0ae47a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.MinSvn", min_svn, 0x80, 0x20, true, 0x306b5cf265833504)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.FlagsMask", flags_mask, 0xa0, 0x20, true, 0xebc773e3aee04d1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.FlagsExpected", flags_expected, 0xc0, 0x20, true, 0x284e75fbda78cb7)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS.AllowDebugging", allow_debugging, 0xe0, 0x1, true, 0x60a3887e732ff780, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif