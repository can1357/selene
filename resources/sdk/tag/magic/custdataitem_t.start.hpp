#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagCUSTDATAITEM.guid", guid, 0x0, 0x80, true, 0x44c02c226fecec1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t), "tagCUSTDATAITEM.varValue", var_value, 0x80, 0xc0, true, 0x89492ba19e936a17)
#else
#define _m00
#define _m01
#endif