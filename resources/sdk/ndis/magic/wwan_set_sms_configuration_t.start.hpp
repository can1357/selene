#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_SMS_CONFIGURATION.Header", header, 0x0, 0x20, true, 0x744cdbb18d9f1bd1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::set_sms_configuration_t), "_NDIS_WWAN_SET_SMS_CONFIGURATION.SetSmsConfiguration", set_sms_configuration, 0x20, 0xa0, true, 0xa579b9af635fa853)
#else
#define _m00
#define _m01
#endif