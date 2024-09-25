#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtlp::hp_heap_manager_t), "_EX_HEAP_SESSION_STATE.HeapManager", heap_manager, 0x0, 0x80, true, 0x60f90c2f85d985aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_env_handle_t), "_EX_HEAP_SESSION_STATE.PagedEnv", paged_env, 0x1c680, 0x80, true, 0x83bb8f7bc7ec155c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::segment_heap_t*), "_EX_HEAP_SESSION_STATE.PagedHeap", paged_heap, 0x1c700, 0x40, true, 0xd87b77545be0229c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::segment_heap_t*), "_EX_HEAP_SESSION_STATE.SpecialPoolHeap", special_pool_heap, 0x1c740, 0x40, true, 0x58059837b322274c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif