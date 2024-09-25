#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_CIPHER_PADDING_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x593b196cf9d160e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_CIPHER_PADDING_INFO.dwFlags", dw_flags, 0x20, 0x20, true, 0x92300d14fce3b050)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NCRYPT_CIPHER_PADDING_INFO.pbIV", pb_iv, 0x40, 0x40, true, 0x19088ecfb5ab9a98)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_CIPHER_PADDING_INFO.cbIV", cb_iv, 0x80, 0x20, true, 0xd72fc61ebfa344f2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NCRYPT_CIPHER_PADDING_INFO.pbOtherInfo", pb_other_info, 0xc0, 0x40, true, 0xb9ce6883113fbd93)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_CIPHER_PADDING_INFO.cbOtherInfo", cb_other_info, 0x100, 0x20, true, 0xe2721201fc5c6ae5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif