#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SMS_DELETE.Header", header, 0x0, 0x20, true, 0x400e3da2ab60ad21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_filter_t), "_NDIS_WWAN_SMS_DELETE.SmsFilter", sms_filter, 0x20, 0x40, true, 0xe7d9bd878c077246)
#else
#define _m00
#define _m01
#endif