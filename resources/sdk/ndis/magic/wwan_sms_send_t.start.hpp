#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SMS_SEND.Header", header, 0x0, 0x20, true, 0xfe33e4ae12e87925)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_send_t), "_NDIS_WWAN_SMS_SEND.SmsSend", sms_send, 0x20, 0xa0, true, 0x7be4deee94ce3326)
#else
#define _m00
#define _m01
#endif