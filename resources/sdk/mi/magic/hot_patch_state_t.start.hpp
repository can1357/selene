#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HOT_PATCH_STATE.UserSidPatchLists", user_sid_patch_lists, 0x0, 0x0, false, 0x893325c73ecb7b29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HOT_PATCH_STATE.GlobalHotPatchList", global_hot_patch_list, 0x0, 0x0, false, 0xff80d4c86968e803)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HOT_PATCH_STATE.PreviouslyRegisteredHotPatchList", previously_registered_hot_patch_list, 0x0, 0x0, false, 0xb3cc64116b6a2ee9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_HOT_PATCH_STATE.SecureImageActivePatches", secure_image_active_patches, 0x0, 0x0, false, 0xdf4f6e02efdee530)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_HOT_PATCH_STATE.HotPatchListLock", hot_patch_list_lock, 0x0, 0x0, false, 0x2b9c850c6c8e41dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::hot_patch_process_context_t), "_MI_HOT_PATCH_STATE.HotPatchProcessContext", hot_patch_process_context, 0x0, 0x0, false, 0x43d2a93d9d37c321)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t*), "_MI_HOT_PATCH_STATE.InProgressPatchTableEntry", in_progress_patch_table_entry, 0x0, 0x0, false, 0xe6f9cf3379128579)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t*), "_MI_HOT_PATCH_STATE.InProgressBaseTableEntry", in_progress_base_table_entry, 0x0, 0x0, false, 0x166c95d97b886cec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile char), "_MI_HOT_PATCH_STATE.ReadyForPatchOperations", ready_for_patch_operations, 0x0, 0x0, false, 0x6fbb5cd9cc7545c9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HOT_PATCH_STATE.HotPatchReserveSize", hot_patch_reserve_size, 0x0, 0x0, false, 0xa2b23fcbf63de49a)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HOT_PATCH_STATE.HotPatchingEnabled", hot_patching_enabled, 0x0, 0x0, false, 0x4a486ed37baa3b7f, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HOT_PATCH_STATE.EnforcePatchSequenceNumbers", enforce_patch_sequence_numbers, 0x0, 0x0, false, 0xc4969265b906d539, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_HOT_PATCH_STATE.HotPatchTestExecuted", hot_patch_test_executed, 0x0, 0x0, false, 0xce03c19a25aa42d0, 1, uint32_t)
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
#endif