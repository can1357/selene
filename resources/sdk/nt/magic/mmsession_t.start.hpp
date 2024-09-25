#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MMSESSION.SystemSpaceViewLock", system_space_view_lock, 0x0, 0x40, true, 0x1b492c2578e004cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t*), "_MMSESSION.SystemSpaceViewLockPointer", system_space_view_lock_pointer, 0x40, 0x40, true, 0xdd8864eb9a046847)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MMSESSION.ViewRoot", view_root, 0x80, 0x40, true, 0xd50c7d80b83630be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMSESSION.ViewCount", view_count, 0xc0, 0x20, true, 0xdcdd44ed49d1bd69)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMSESSION.BitmapFailures", bitmap_failures, 0xe0, 0x20, true, 0x94c53c66b295cd36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif