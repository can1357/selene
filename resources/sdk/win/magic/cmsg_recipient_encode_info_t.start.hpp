#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_RECIPIENT_ENCODE_INFO.dwRecipientChoice", dw_recipient_choice, 0x0, 0x20, true, 0x388877b0cd274647)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcmsg_key_trans_recipient_encode_info_t ), "_CMSG_RECIPIENT_ENCODE_INFO.pKeyTrans", p_key_trans, 0x40, 0x40, true, 0x70e7af1177a30d4a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcmsg_key_agree_recipient_encode_info_t ), "_CMSG_RECIPIENT_ENCODE_INFO.pKeyAgree", p_key_agree, 0x40, 0x40, true, 0xe14ec874e55aec2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcmsg_mail_list_recipient_encode_info_t ), "_CMSG_RECIPIENT_ENCODE_INFO.pMailList", p_mail_list, 0x40, 0x40, true, 0xbf6157b84fbec6c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif