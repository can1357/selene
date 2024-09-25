#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::switch_context_attribute_t), "tagSWITCH_CONTEXT.Attribute", attribute, 0x0, 0xc0, true, 0xac78e2484a5fcf26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::switch_context_data_t), "tagSWITCH_CONTEXT.Data", data, 0xc0, 0x0, true, 0xb361c336d3061d6)
#else
#define _m00
#define _m01
#endif