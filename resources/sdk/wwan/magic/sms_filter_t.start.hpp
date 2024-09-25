#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::sms_flag_t), "_WWAN_SMS_FILTER.Flag", flag, 0x0, 0x20, true, 0x977f82a6c6dc4d05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_SMS_FILTER.MessageIndex", message_index, 0x20, 0x20, true, 0xc5e060a01e2d39e2)
#else
#define _m00
#define _m01
#endif