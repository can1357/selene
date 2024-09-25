#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x2467e6c0fc327c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x6671b4d9626abd59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_mail_list_recipient_info_t*), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.pMailList", p_mail_list, 0x80, 0x40, true, 0x9040450ac83c9d4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.dwRecipientIndex", dw_recipient_index, 0xc0, 0x20, true, 0x85fff7581f4579e8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.dwKeyChoice", dw_key_choice, 0xe0, 0x20, true, 0xb44a4bcae8eea8f5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.hKeyEncryptionKey", h_key_encryption_key, 0x100, 0x40, true, 0x832fb82084409c43)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_CTRL_MAIL_LIST_DECRYPT_PARA.pvKeyEncryptionKey", pv_key_encryption_key, 0x100, 0x40, true, 0x9ccf1080e8ffcc32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif