#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_KEY_PROV_INFO.pwszContainerName", pwsz_container_name, 0x0, 0x40, true, 0x147ad5c7817bdb72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_KEY_PROV_INFO.pwszProvName", pwsz_prov_name, 0x40, 0x40, true, 0x7619041163cbd9cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_INFO.dwProvType", dw_prov_type, 0x80, 0x20, true, 0xe2703e0e28cd992d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_INFO.dwFlags", dw_flags, 0xa0, 0x20, true, 0xe17bb4f2159af8c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_INFO.cProvParam", c_prov_param, 0xc0, 0x20, true, 0x18acd2447b20dea3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_key_prov_param_t*), "_CRYPT_KEY_PROV_INFO.rgProvParam", rg_prov_param, 0x100, 0x40, true, 0xc201f25f026db8ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_KEY_PROV_INFO.dwKeySpec", dw_key_spec, 0x140, 0x20, true, 0x2db9347627cc941b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif