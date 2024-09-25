#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 16>), "_WWAN_SET_SMS_CONFIGURATION.ScAddress", sc_address, 0x0, 0x80, true, 0xacc5db138ec9243)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_format_t), "_WWAN_SET_SMS_CONFIGURATION.SmsFormat", sms_format, 0x80, 0x20, true, 0x941fdbb81ff063a9)
#else
#define _m00
#define _m01
#endif