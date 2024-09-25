#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_COUNTRY_OR_REGION_STRING_LIST.Header", header, 0x0, 0x20, true, 0x419eaa9b6c0966cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_COUNTRY_OR_REGION_STRING_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x6a88d044e1c54f9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_COUNTRY_OR_REGION_STRING_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0xd2ea142559fe4f1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 3>, 1>), "DOT11_COUNTRY_OR_REGION_STRING_LIST.CountryOrRegionStrings", country_or_region_strings, 0x60, 0x18, true, 0xe0c71b924cbad425)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif