#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_SRTP_PROTECTION_PROFILES.ProfilesSize", profiles_size, 0x0, 0x10, true, 0xb4d9989da89933ad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_SEC_SRTP_PROTECTION_PROFILES.ProfilesList", profiles_list, 0x10, 0x10, true, 0xa948f81d7d03cf6)
#else
#define _m00
#define _m01
#endif