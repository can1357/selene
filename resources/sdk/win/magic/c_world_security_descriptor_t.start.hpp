#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_t), "CWorldSecurityDescriptor._sd", sd, 0x0, 0x40, true, 0x58cdaa0c8a2d176)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint64_t, 13>, sdk::array<uint8_t, 144>>), "CWorldSecurityDescriptor._acl", acl, 0x140, 0x80, true, 0x48ba0db249c6a981)
#else
#define _m00
#define _m01
#endif