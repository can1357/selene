#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_TAGGED_ATTRIBUTE.dwBodyPartID", dw_body_part_id, 0x0, 0x20, true, 0xaacb6026e03e7f80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t), "_CMC_TAGGED_ATTRIBUTE.Attribute", attribute, 0x40, 0xc0, true, 0x6039b9b433782e76)
#else
#define _m00
#define _m01
#endif