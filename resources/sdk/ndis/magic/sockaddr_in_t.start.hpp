#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "sockaddr_in.sin_family", sin_family, 0x0, 0x10, true, 0x8ab88af6dd17bb9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "sockaddr_in.sin_port", sin_port, 0x10, 0x10, true, 0xcc08cd68cfe51ab2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "sockaddr_in.sin_addr", sin_addr, 0x20, 0x20, true, 0x5c44929e67b295b1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 8>), "sockaddr_in.sin_zero", sin_zero, 0x40, 0x40, true, 0xcf537628e205c2c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif