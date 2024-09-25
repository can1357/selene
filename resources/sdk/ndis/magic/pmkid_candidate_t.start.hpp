#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_PMKID_CANDIDATE.BSSID", bssid, 0x0, 0x30, true, 0x923370ee3a52bc04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PMKID_CANDIDATE.Flags", flags, 0x40, 0x20, true, 0x8e520000049b1b54)
#else
#define _m00
#define _m01
#endif