#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_VWIFI_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x9b926ee82e922f3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_VWIFI_ATTRIBUTES.uTotalNumOfEntries", u_total_num_of_entries, 0x20, 0x20, true, 0x2d170fccd9abd9a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_vwifi_combination_t, 1>), "DOT11_VWIFI_ATTRIBUTES.Combinations", combinations, 0x40, 0x80, true, 0xc247fe04227dd8b2)
#else
#define _m00
#define _m01
#define _m02
#endif