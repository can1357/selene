#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_pool_t*), "_POP_FX_WORK_POOL_ITEM.WorkPool", work_pool, 0x0, 0x40, true, 0x8de9dd63fe205d37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_POP_FX_WORK_POOL_ITEM.WorkItem", work_item, 0x40, 0x0, true, 0xae846e37f07537d8)
#else
#define _m00
#define _m01
#endif