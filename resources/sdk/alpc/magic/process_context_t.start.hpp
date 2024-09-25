#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ALPC_PROCESS_CONTEXT.Lock", lock, 0x0, 0x40, true, 0xe1bda7598bfc437)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ALPC_PROCESS_CONTEXT.ViewListHead", view_list_head, 0x40, 0x80, true, 0xa5f1812dc3044f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_ALPC_PROCESS_CONTEXT.PagedPoolQuotaCache", paged_pool_quota_cache, 0xc0, 0x40, true, 0xfb48a023005ec762)
#else
#define _m00
#define _m01
#define _m02
#endif