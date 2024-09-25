#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_COMBINE_PAGE_LISTHEAD.Table", table, 0x0, 0x40, true, 0x582025ab32ca0c5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_COMBINE_PAGE_LISTHEAD.Lock", lock, 0x40, 0x20, true, 0xe5e85350b2c16525)
#else
#define _m00
#define _m01
#endif