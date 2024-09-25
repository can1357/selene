#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_MAC_ADDRESS_LIST.Header", header, 0x0, 0x20, true, 0x3345d85aa05112d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_MAC_ADDRESS_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xfd957843ffb598fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_MAC_ADDRESS_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x60e720d50f825455)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 6>, 1>), "DOT11_MAC_ADDRESS_LIST.MacAddrs", mac_addrs, 0x60, 0x30, true, 0xef977fafa38343f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif