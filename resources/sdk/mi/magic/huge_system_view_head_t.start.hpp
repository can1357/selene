#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HUGE_SYSTEM_VIEW_HEAD.ViewRoot", view_root, 0x0, 0x40, true, 0x9e41bc5e37ac08b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HUGE_SYSTEM_VIEW_HEAD.ViewCount", view_count, 0x40, 0x20, true, 0x84b4e675e5c8ae3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_HUGE_SYSTEM_VIEW_HEAD.Lock", lock, 0x60, 0x20, true, 0x580d891ac2e90e61)
#else
#define _m00
#define _m01
#define _m02
#endif