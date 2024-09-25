#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_AUTH_ALGORITHM_LIST.Header", header, 0x0, 0x20, true, 0x9b2e7966f71ff1a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_AUTH_ALGORITHM_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xcec9ef7a7cd65e54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_AUTH_ALGORITHM_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x64b8589bbb4d8169)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum ndis::dot11_auth_algorithm_t, 1>), "DOT11_AUTH_ALGORITHM_LIST.AlgorithmIds", algorithm_ids, 0x60, 0x20, true, 0x8940000ac6c0ed95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif