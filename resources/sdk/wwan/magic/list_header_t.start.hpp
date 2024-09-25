#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::struct_type_t), "_WWAN_LIST_HEADER.ElementType", element_type, 0x0, 0x20, true, 0x595a8a5efa30b2f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_LIST_HEADER.ElementCount", element_count, 0x20, 0x20, true, 0x76ea2ea780308fde)
#else
#define _m00
#define _m01
#endif