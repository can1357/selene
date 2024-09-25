#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_SSID_LIST.Header", header, 0x0, 0x20, true, 0xa71f75a71b6d54b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_SSID_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xefa5e7ae4effcb27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_SSID_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x72edf984b593727e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_ssid_t, 1>), "DOT11_SSID_LIST.SSIDs", ssi_ds, 0x60, 0x20, true, 0xa364ec26bd5ae19f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif