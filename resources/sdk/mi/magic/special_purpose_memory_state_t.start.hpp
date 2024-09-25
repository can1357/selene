#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.TypesList", types_list, 0x0, 0x0, false, 0xe503b1f167ad0169)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.CacheEligibleList", cache_eligible_list, 0x0, 0x0, false, 0xc484ed0b7cca3cff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::epartition_t*), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.RegularMemoryParentPartitionObject", regular_memory_parent_partition_object, 0x0, 0x0, false, 0xad577786c33e0cbb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.SpecialPurposeMemoryParentHandle", special_purpose_memory_parent_handle, 0x0, 0x0, false, 0xa9d3c5db1cd9a4a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.Attributes", attributes, 0x0, 0x0, false, 0xbbbe5a037f2a5254)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SPECIAL_PURPOSE_MEMORY_STATE.Lock", lock, 0x0, 0x0, false, 0x926b28929a8ee46c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif