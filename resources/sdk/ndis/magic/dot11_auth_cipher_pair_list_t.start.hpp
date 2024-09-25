#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_AUTH_CIPHER_PAIR_LIST.Header", header, 0x0, 0x20, true, 0xfd76d41e0dab66b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_AUTH_CIPHER_PAIR_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0xab47268f01ba38df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_AUTH_CIPHER_PAIR_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x56aa871b08072bdd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_auth_cipher_pair_t, 1>), "DOT11_AUTH_CIPHER_PAIR_LIST.AuthCipherPairs", auth_cipher_pairs, 0x60, 0x40, true, 0x1f2c43dc4661bd01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif