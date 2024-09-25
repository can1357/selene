#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.aiAlgid", ai_algid, 0x0, 0x20, true, 0xf4ae65f34869e630)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwDefaultLen", dw_default_len, 0x20, 0x20, true, 0xaac1debefe66c181)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwMinLen", dw_min_len, 0x40, 0x20, true, 0x169764ad94be06ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwMaxLen", dw_max_len, 0x60, 0x20, true, 0x3853e1ac5afd796c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwProtocols", dw_protocols, 0x80, 0x20, true, 0x5538521aab4fb3e3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwNameLen", dw_name_len, 0xa0, 0x20, true, 0xfa97668d8fc2195b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 20>), "_PROV_ENUMALGS_EX.szName", sz_name, 0xc0, 0xa0, true, 0x4e28bb92f34a4e60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROV_ENUMALGS_EX.dwLongNameLen", dw_long_name_len, 0x160, 0x20, true, 0x57463777d7f276ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 40>), "_PROV_ENUMALGS_EX.szLongName", sz_long_name, 0x180, 0x40, true, 0xf15e2f512ec8994)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif