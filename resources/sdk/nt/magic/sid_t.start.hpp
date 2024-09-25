#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SID.Revision", revision, 0x0, 0x8, true, 0xd20087950e11737f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SID.SubAuthorityCount", sub_authority_count, 0x8, 0x8, true, 0x8de28eb685ecd9f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_identifier_authority_t), "_SID.IdentifierAuthority", identifier_authority, 0x10, 0x30, true, 0x8d5fb3ebd8c10278)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_SID.SubAuthority", sub_authority, 0x40, 0x20, true, 0xf6a8f38b251986e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif