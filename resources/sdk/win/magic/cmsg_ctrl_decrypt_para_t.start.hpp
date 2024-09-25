#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DECRYPT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x7cb2ede17dd9595d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_DECRYPT_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x4cb8b2c05623c754)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_DECRYPT_PARA.hNCryptKey", h_n_crypt_key, 0x40, 0x40, true, 0xa440b14a1de65de2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DECRYPT_PARA.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x9fb551c3aea7a026)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_DECRYPT_PARA.dwRecipientIndex", dw_recipient_index, 0xa0, 0x20, true, 0xb012216b5370cfe0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif