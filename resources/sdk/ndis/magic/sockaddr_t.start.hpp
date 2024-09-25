#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "sockaddr.sa_family", sa_family, 0x0, 0x10, true, 0x2c202348bc763d4b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 14>), "sockaddr.sa_data", sa_data, 0x10, 0x70, true, 0xa3cfe3212cced03d)
#else
#define _m00
#define _m01
#endif