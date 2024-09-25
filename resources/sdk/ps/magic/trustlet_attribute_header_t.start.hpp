#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ps::trustlet_attribute_type_t), "_PS_TRUSTLET_ATTRIBUTE_HEADER.AttributeType", attribute_type, 0x0, 0x20, true, 0x9b41beee9481deb0)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PS_TRUSTLET_ATTRIBUTE_HEADER.InstanceNumber", instance_number, 0x20, 0x8, true, 0xb9e0ea84482296d6, 8, uint32_t)
#else
#define _m00
#define _m01
#endif