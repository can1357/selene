#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_format_t), "_WWAN_SMS_READ.SmsFormat", sms_format, 0x0, 0x20, true, 0xefde75aa93b899b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::sms_filter_t), "_WWAN_SMS_READ.ReadFilter", read_filter, 0x20, 0x40, true, 0xac933aa35cef5a27)
#else
#define _m00
#define _m01
#endif