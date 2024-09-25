#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x71f7d5721c472636)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x51716cfd1efeb459)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.hNCryptKey", h_n_crypt_key, 0x40, 0x40, true, 0x1c41cf6cd36fc672)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.dwKeySpec", dw_key_spec, 0x80, 0x20, true, 0x30fd08f4c5003d89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_key_agree_recipient_info_t*), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.pKeyAgree", p_key_agree, 0xc0, 0x40, true, 0xa0610d546d0ab379)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.dwRecipientIndex", dw_recipient_index, 0x100, 0x20, true, 0x681c31fbffc416a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.dwRecipientEncryptedKeyIndex", dw_recipient_encrypted_key_index, 0x120, 0x20, true, 0x876ec7dd007ca95b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CMSG_CTRL_KEY_AGREE_DECRYPT_PARA.OriginatorPublicKey", originator_public_key, 0x140, 0xc0, true, 0x335f43b0416f4f90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif