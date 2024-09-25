#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::funcdesc_t*), "tagMethodInfo.pFuncDesc", p_func_desc, 0x0, 0x40, true, 0x15e9ec174c4e2702)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_type_info_t*), "tagMethodInfo.pTypeInfo", p_type_info, 0x40, 0x40, true, 0xcde9c75d10b2713c)
#else
#define _m00
#define _m01
#endif