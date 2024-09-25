#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SYSTEM_IMAGE_STATE.FixupList", fixup_list, 0x0, 0x80, true, 0x7fb75c5ab43f9a38)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::kmutant_t, struct ex::push_lock_t>), "_MI_SYSTEM_IMAGE_STATE.LoadLock", load_lock, 0x80, 0x40, true, 0x906d97741d578337)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_IMAGE_STATE.FixupLock", fixup_lock, 0x120, 0x20, true, 0x6c9b66ed1016a1e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_IMAGE_STATE.FirstLoadEver", first_load_ever, 0x140, 0x8, true, 0xe205a112accb0fec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_IMAGE_STATE.LargePageAll", large_page_all, 0x148, 0x8, true, 0xf6c79ac08c395a50)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SYSTEM_IMAGE_STATE.LargePageList", large_page_list, 0x1c0, 0x80, true, 0x794e5a8cc7717ccf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_SYSTEM_IMAGE_STATE.StrongCodeLoadFailureList", strong_code_load_failure_list, 0x240, 0x80, true, 0xf4685f1c5cc869e6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t*), "_MI_SYSTEM_IMAGE_STATE.BeingDeleted", being_deleted, 0x300, 0x40, true, 0xe651f600c61d871d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SYSTEM_IMAGE_STATE.MappingRangesPushLock", mapping_ranges_push_lock, 0x340, 0x40, true, 0xc112381ceac4a12f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::driver_va_t*, 2>), "_MI_SYSTEM_IMAGE_STATE.MappingRanges", mapping_ranges, 0x380, 0x80, true, 0x29ed2f0e4b71a36f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::system_page_counts_t), "_MI_SYSTEM_IMAGE_STATE.PageCounts", page_counts, 0x440, 0x80, true, 0xd661c5eb9f5857fc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SYSTEM_IMAGE_STATE.CollidedLock", collided_lock, 0x4c0, 0x40, true, 0x94c7afeff3560ec0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_IMAGE_STATE.LastPage", last_page, 0x180, 0x40, true, 0xc5e963ba3ea4efa2)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_IMAGE_STATE.PageCount", page_count, 0x400, 0x40, true, 0x5cf4d862c2f1a1a9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MI_SYSTEM_IMAGE_STATE.LoadLockOwner", load_lock_owner, 0xc0, 0x40, true, 0x1be0ab1ffb855477)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_IMAGE_STATE.LoadLockCount", load_lock_count, 0x100, 0x20, true, 0xd40b79f763f20eb5)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ldr::km::data_table_entry_t*, 1>), "_MI_SYSTEM_IMAGE_STATE.SystemBase", system_base, 0x2c0, 0x40, true, 0x789082553e2f71c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SYSTEM_IMAGE_STATE.ImageTree", image_tree, 0x500, 0x40, true, 0xb75e9cfa63af906f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SYSTEM_IMAGE_STATE.EncodeDecodeLock", encode_decode_lock, 0x0, 0x0, false, 0x46478cf7e74963b2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SYSTEM_IMAGE_STATE.EncodeDecodeDepth", encode_decode_depth, 0x0, 0x0, false, 0x5aafac8961cc66be)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_IMAGE_STATE.SystemImagesLoaded", system_images_loaded, 0x0, 0x0, false, 0xe81db03b7da996b8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::bitmap_ex_t, 1>), "_MI_SYSTEM_IMAGE_STATE.BaseImageDiscardedBitmaps", base_image_discarded_bitmaps, 0x0, 0x0, false, 0xf3b413ff65857d66)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ldr::km::data_table_entry_t*), "_MI_SYSTEM_IMAGE_STATE.LoadInProgress", load_in_progress, 0x0, 0x0, false, 0x35c098db338a7634)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_IMAGE_STATE.ImportEntriesReplaced", import_entries_replaced, 0x0, 0x0, false, 0xc566c17437681cda)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::function_override_capabilities_t), "_MI_SYSTEM_IMAGE_STATE.FunctionOverrideCapabilities", function_override_capabilities, 0x0, 0x0, false, 0x2c70c09b9e76f2e3)
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
#define _m21
#define _m22
#define _m23
#define _m24
#endif