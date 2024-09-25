#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.BeingDeleted", being_deleted, 0x0, 0x1, true, 0xe00d3c16374cbd29, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.PageListsInitialized", page_lists_initialized, 0x1, 0x1, true, 0x280c038fd51fb26d, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.StoreReservedPagesCharged", store_reserved_pages_charged, 0x2, 0x1, true, 0x15064e40c83ce824, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.PureHoldingPartition", pure_holding_partition, 0x5, 0x1, true, 0x6ecb7b9da3d7c69, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.UseProtectedSlabAllocators", use_protected_slab_allocators, 0x3, 0x1, true, 0x4f44a46b49c88e1, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.ZeroPagesOptional", zero_pages_optional, 0x6, 0x1, true, 0x44bc9c5c0106d24d, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.BackgroundZeroingDisabled", background_zeroing_disabled, 0x7, 0x1, true, 0xb263795cb8bdb30a, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.UseUnprotectedSlabAllocators", use_unprotected_slab_allocators, 0x4, 0x1, true, 0xbe47fc28eef503ae, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.SpecialPurposeMemoryPartition", special_purpose_memory_partition, 0x0, 0x0, false, 0x9ba83c5663a77c47, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PARTITION_FLAGS.ObjectInitialized", object_initialized, 0x0, 0x0, false, 0xbd3b727b56a445f9, 1, uint32_t)
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
#endif