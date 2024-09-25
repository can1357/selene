#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::key_full_information_t*), "KeyRefreshInfo.fullInfo", full_info, 0x0, 0x40, true, 0xd33ce31ecc6d3279)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::key_name_information_t*), "KeyRefreshInfo.nameInfo", name_info, 0x40, 0x40, true, 0x3ee3c65e714484af)
#else
#define _m00
#define _m01
#endif