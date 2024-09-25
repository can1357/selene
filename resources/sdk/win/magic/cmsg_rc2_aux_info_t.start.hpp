#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RC2_AUX_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xa42c241416abc58e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RC2_AUX_INFO.dwBitLen", dw_bit_len, 0x20, 0x20, true, 0x30c0df453de999be)
#else
#define _m00
#define _m01
#endif