#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_KTIMER2_COLLECTION.Tree", tree, 0x0, 0x80, true, 0x781a39826ba1551c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTIMER2_COLLECTION.NextDueTime", next_due_time, 0x80, 0x40, true, 0x1cc3bad845711e15)
#else
#define _m00
#define _m01
#endif