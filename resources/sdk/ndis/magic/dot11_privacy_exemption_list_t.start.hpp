#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_PRIVACY_EXEMPTION_LIST.Header", header, 0x0, 0x20, true, 0x12d8100999180ec1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PRIVACY_EXEMPTION_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x53fec7630ceeb914)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PRIVACY_EXEMPTION_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x137a45e490439dee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_privacy_exemption_t, 1>), "DOT11_PRIVACY_EXEMPTION_LIST.PrivacyExemptionEntries", privacy_exemption_entries, 0x60, 0x30, true, 0x8a1d68faf66d846f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif