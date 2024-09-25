#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::co_marshaling_context_attributes_t), "MarshalingContextAttributeValue.attribute", attribute, 0x0, 0x20, true, 0x381b376da104ef16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MarshalingContextAttributeValue.value", value, 0x40, 0x40, true, 0xf7ffd03f500dba31)
#else
#define _m00
#define _m01
#endif