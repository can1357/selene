#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS.aiAlgid", ai_algid, 0x0, 0x20, true, 0xf2f051a07d08ca9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS.dwBitLen", dw_bit_len, 0x20, 0x20, true, 0xb6a6424c665fd192)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS.dwNameLen", dw_name_len, 0x40, 0x20, true, 0x9564aadbce6d9af5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 20>), "_PROV_ENUMALGS.szName", sz_name, 0x60, 0xa0, true, 0x7e6f98a51b64fac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif