#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x68b136c697170f75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x58dbbaf609fb06bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.dwSignerIndex", dw_signer_index, 0x80, 0x20, true, 0x4aea16b315eaff2f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.dwSignerType", dw_signer_type, 0xa0, 0x20, true, 0x62e5528d73cb460d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA.pvSigner", pv_signer, 0xc0, 0x40, true, 0x48b5c9aba53ef87a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif