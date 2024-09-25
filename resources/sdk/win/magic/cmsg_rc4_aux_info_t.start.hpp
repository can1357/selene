#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RC4_AUX_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xdf03338f86e7a221)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RC4_AUX_INFO.dwBitLen", dw_bit_len, 0x20, 0x20, true, 0x4919f2adf3414495)
#else
#define _m00
#define _m01
#endif