#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_IMPORT.MatchType", match_type, 0x0, 0x20, true, 0xffe7974ece389e86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_IMPORT.MinimumSecurityVersion", minimum_security_version, 0x20, 0x20, true, 0xa404add338aa37bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_IMAGE_ENCLAVE_IMPORT.UniqueOrAuthorID", unique_or_author_id, 0x40, 0x0, true, 0x1e26baeaa4383786)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_IMPORT.FamilyID", family_id, 0x140, 0x80, true, 0x1087a15b16515a92)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IMAGE_ENCLAVE_IMPORT.ImageID", image_id, 0x1c0, 0x80, true, 0x516e12a87d323888)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ENCLAVE_IMPORT.ImportName", import_name, 0x240, 0x20, true, 0xfdf11dd625f2168e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif