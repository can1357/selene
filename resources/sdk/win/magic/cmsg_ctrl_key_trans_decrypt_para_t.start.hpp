#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x48c81ea1837ca746)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x7f921f3ba3d6bfaf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.hNCryptKey", h_n_crypt_key, 0x40, 0x40, true, 0x4fcd7b869efe2f58)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x377a25e20297e836)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_key_trans_recipient_info_t*), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.pKeyTrans", p_key_trans, 0xc0, 0x40, true, 0x389982b584958f3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_TRANS_DECRYPT_PARA.dwRecipientIndex", dw_recipient_index, 0x100, 0x20, true, 0xeeda4fcca4019cd7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif