#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SMS_READ.Header", header, 0x0, 0x20, true, 0xe2da842ad06c036f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_read_t), "_NDIS_WWAN_SMS_READ.SmsRead", sms_read, 0x20, 0x60, true, 0xbdec2ac42cc21598)
#else
#define _m00
#define _m01
#endif