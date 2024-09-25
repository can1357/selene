#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::std_list_entry_t*), "_RTL_STD_LIST_HEAD.Next", next, 0x0, 0x40, true, 0x6a9344bf1ccb0adf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::stack_database_lock_t), "_RTL_STD_LIST_HEAD.Lock", lock, 0x40, 0x40, true, 0xfe9deb0ae842d1ec)
#else
#define _m00
#define _m01
#endif