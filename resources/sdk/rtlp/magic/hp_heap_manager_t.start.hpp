#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtlp::hp_heap_globals_t*), "_RTLP_HP_HEAP_MANAGER.Globals", globals, 0x0, 0x40, true, 0xe93c34e546fb9287)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtlp::hp_alloc_tracker_t), "_RTLP_HP_HEAP_MANAGER.AllocTracker", alloc_tracker, 0x40, 0x80, true, 0xac45964d438171f3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::vamgr_ctx_t), "_RTLP_HP_HEAP_MANAGER.VaMgr", va_mgr, 0x2c0, 0x0, true, 0xd27ae7a3e7b0664c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtlp::hp_metadata_heap_ctx_t, 3>), "_RTLP_HP_HEAP_MANAGER.MetadataHeaps", metadata_heaps, 0x1c4c0, 0x80, true, 0x417525a7fead8452)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_sub_allocator_configs_t), "_RTLP_HP_HEAP_MANAGER.SubAllocConfigs", sub_alloc_configs, 0x1c640, 0x40, true, 0x79fa2aae93b60b20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif