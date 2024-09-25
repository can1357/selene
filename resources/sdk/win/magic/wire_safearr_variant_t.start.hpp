#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireSAFEARR_VARIANT.Size", size, 0x0, 0x20, true, 0xdd464e6494b674bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_variant_t**), "_wireSAFEARR_VARIANT.aVariant", a_variant, 0x40, 0x40, true, 0xae5d36ae48a96b4c)
#else
#define _m00
#define _m01
#endif