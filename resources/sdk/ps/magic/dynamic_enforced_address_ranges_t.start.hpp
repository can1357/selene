#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_PS_DYNAMIC_ENFORCED_ADDRESS_RANGES.Tree", tree, 0x0, 0x40, true, 0xdfc61da908568a4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_PS_DYNAMIC_ENFORCED_ADDRESS_RANGES.Lock", lock, 0x40, 0x40, true, 0xd2504852b5474f88)
#else
#define _m00
#define _m01
#endif