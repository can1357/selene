#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "DOT11_PMKID_ENTRY.BSSID", bssid, 0x0, 0x30, true, 0x31cf753e767e5da0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "DOT11_PMKID_ENTRY.PMKID", pmkid, 0x30, 0x80, true, 0x7384c4e3627dda1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PMKID_ENTRY.uFlags", u_flags, 0xc0, 0x20, true, 0x6169f71528606ce0)
#else
#define _m00
#define _m01
#define _m02
#endif