#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_CIPHER_ALGORITHM_LIST.Header", header, 0x0, 0x20, true, 0x71e1eb9bf3b9a35e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_CIPHER_ALGORITHM_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xe00062ae07ccc159)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_CIPHER_ALGORITHM_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x2cd3c3fe9b5e3633)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum ndis::dot11_cipher_algorithm_t, 1>), "DOT11_CIPHER_ALGORITHM_LIST.AlgorithmIds", algorithm_ids, 0x60, 0x20, true, 0x3b494e2f2a6e91fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif