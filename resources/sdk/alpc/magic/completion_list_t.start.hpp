#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_COMPLETION_LIST.Entry", entry, 0x0, 0x80, true, 0xbceb089a529a5b11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ALPC_COMPLETION_LIST.OwnerProcess", owner_process, 0x80, 0x40, true, 0xfc35e778e18a877b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_COMPLETION_LIST.CompletionListLock", completion_list_lock, 0xc0, 0x40, true, 0xd5e35ece760503e3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_ALPC_COMPLETION_LIST.Mdl", mdl, 0x100, 0x40, true, 0x7dde1eeebebe58fc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.UserVa", user_va, 0x140, 0x40, true, 0x21cb12e05f94ea75)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.UserLimit", user_limit, 0x180, 0x40, true, 0xd82ba84d8d06909a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.DataUserVa", data_user_va, 0x1c0, 0x40, true, 0x11994d52362903bc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.SystemVa", system_va, 0x200, 0x40, true, 0x8be2098f25e3b1e5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST.TotalSize", total_size, 0x240, 0x40, true, 0xd0ed18ed03bf41c9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::completion_list_header_t*), "_ALPC_COMPLETION_LIST.Header", header, 0x280, 0x40, true, 0x871fa97392437e19)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.List", list, 0x2c0, 0x40, true, 0x18fb0c2ba944cb92)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST.ListSize", list_size, 0x300, 0x40, true, 0x3f1ba50ec023e078)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.Bitmap", bitmap, 0x340, 0x40, true, 0x1965e235204eb087)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST.BitmapSize", bitmap_size, 0x380, 0x40, true, 0x1e3d05a8119d92e0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_COMPLETION_LIST.Data", data, 0x3c0, 0x40, true, 0x378f56e4b04ec9f5)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST.DataSize", data_size, 0x400, 0x40, true, 0xcca9654a88ea569c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST.BitmapLimit", bitmap_limit, 0x440, 0x20, true, 0xe252406dd64f045f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST.BitmapNextHint", bitmap_next_hint, 0x460, 0x20, true, 0x2d2e8f0269ad385d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST.ConcurrencyCount", concurrency_count, 0x480, 0x20, true, 0xa997eb98affb93e6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST.AttributeFlags", attribute_flags, 0x4a0, 0x20, true, 0xc5cb83dc62757028)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_COMPLETION_LIST.AttributeSize", attribute_size, 0x4c0, 0x20, true, 0xa03cb4bafcc38d2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif