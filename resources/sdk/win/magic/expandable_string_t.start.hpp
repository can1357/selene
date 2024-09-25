#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ExpandableString.Unexpanded", unexpanded, 0x0, 0x40, true, 0x14af0b012266bd30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ExpandableString.IsExpandable", is_expandable, 0x40, 0x8, true, 0xce686d66483dfcc5)
#else
#define _m00
#define _m01
#endif