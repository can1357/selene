#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_format_t), "_WWAN_SMS_SEND.SmsFormat", sms_format, 0x0, 0x20, true, 0x9b6334c091be1aa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_send_pdu_t), "_WWAN_SMS_SEND.Pdu", pdu, 0x20, 0x78, true, 0xeef95641450c1644)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_send_cdma_t), "_WWAN_SMS_SEND.Cdma", cdma, 0x20, 0x0, true, 0xf2ad8845c01a1cf4)
#else
#define _m00
#define _m01
#define _m02
#endif