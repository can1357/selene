#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "CCustomProperties._traceEvents", trace_events, 0x180, 0x8, true, 0x43fc8480f5ffd3cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::registry_key_t), "CCustomProperties._customPropertiesKey", custom_properties_key, 0x1c0, 0x40, true, 0xe5c2c44462125aeb)
#else
#define _m00
#define _m01
#endif