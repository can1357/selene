#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagSTREAM_SID.Revision", revision, 0x0, 0x8, true, 0xf28b407e45aaf385)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagSTREAM_SID.SubAuthorityCount", sub_authority_count, 0x8, 0x8, true, 0xc6b12e02367139f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::ssid_identifier_authority_t), "tagSTREAM_SID.IdentifierAuthority", identifier_authority, 0x10, 0x30, true, 0xbfe8cb7c5ec7aa3a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagSTREAM_SID.SubAuthority", sub_authority, 0x40, 0x20, true, 0xe55cd6a433f3ee9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif