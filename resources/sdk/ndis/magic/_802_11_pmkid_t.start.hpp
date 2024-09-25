#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_PMKID.Length", length, 0x0, 0x20, true, 0xda97caffc05ff8a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_PMKID.BSSIDInfoCount", bssid_info_count, 0x20, 0x20, true, 0x6234e6bcca656a0d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::bssid_info_t, 1>), "_NDIS_802_11_PMKID.BSSIDInfo", bssid_info, 0x40, 0xb0, true, 0xeca0b0a5a1c9ac1a)
#else
#define _m00
#define _m01
#define _m02
#endif