#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_COMBINE_STATE.ActiveSpinLock", active_spin_lock, 0x0, 0x20, true, 0x71fa1af3c43e32bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_COMBINE_STATE.CombiningThreadCount", combining_thread_count, 0x20, 0x20, true, 0xba925bd8310790b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_COMBINE_STATE.ActiveThreadTree", active_thread_tree, 0x40, 0x40, true, 0x6930d515c4bc6842)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMBINE_STATE.CommonPageCombineDomain", common_page_combine_domain, 0x80, 0x40, true, 0x5b50adea92cf68ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_COMBINE_STATE.CommonCombineDomainAssigned", common_combine_domain_assigned, 0xc0, 0x20, true, 0x56ee9301ac82005a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_COMBINE_STATE.CombineSequence", combine_sequence, 0x0, 0x0, false, 0x372e0e082de85c32)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_COMBINE_STATE.ZeroPageHashValue", zero_page_hash_value, 0x0, 0x0, false, 0x4263bb50d88d6660)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::page_combining_support_t), "_MI_COMBINE_STATE.CrossPartition", cross_partition, 0x0, 0x0, false, 0xc1852445ee0e1071)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif