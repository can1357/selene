#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CMS_RECIPIENT_INFO.dwRecipientChoice", dw_recipient_choice, 0x0, 0x20, true, 0x8273a0613441923b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_key_trans_recipient_info_t*), "_CMSG_CMS_RECIPIENT_INFO.pKeyTrans", p_key_trans, 0x40, 0x40, true, 0x9686c93f9b19da64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_key_agree_recipient_info_t*), "_CMSG_CMS_RECIPIENT_INFO.pKeyAgree", p_key_agree, 0x40, 0x40, true, 0x7e7312635553166a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_mail_list_recipient_info_t*), "_CMSG_CMS_RECIPIENT_INFO.pMailList", p_mail_list, 0x40, 0x40, true, 0x221c6bf16f096cbb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif