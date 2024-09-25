#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_PARAM.dwParam", dw_param, 0x0, 0x20, true, 0xd45dfed98eef3049)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRYPT_KEY_PROV_PARAM.pbData", pb_data, 0x40, 0x40, true, 0x676f0aa3d2197e76)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_PARAM.cbData", cb_data, 0x80, 0x20, true, 0xeabc692a40fb2c58)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_PARAM.dwFlags", dw_flags, 0xa0, 0x20, true, 0x8d566be28b052530)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif