#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_ASSOCIATION_INFO_LIST.Header", header, 0x0, 0x20, true, 0x5d3a48df1fb12fdf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_ASSOCIATION_INFO_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x97abb93f10c8111e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_ASSOCIATION_INFO_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x63da3e0d1157f189)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_association_info_ex_t, 1>), "DOT11_ASSOCIATION_INFO_LIST.dot11AssocInfo", dot11_assoc_info, 0x80, 0x40, true, 0xb50bdbe6b3b6a0af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif