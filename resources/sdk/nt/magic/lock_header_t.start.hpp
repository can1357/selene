#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_LOCK_HEADER.LockTree", lock_tree, 0x0, 0x40, true, 0xb93a8b7eb6e488fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOCK_HEADER.Count", count, 0x80, 0x40, true, 0x5b5be0d567511f85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOCK_HEADER.Lock", lock, 0xc0, 0x40, true, 0xc7ef590b7ef32afb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOCK_HEADER.Valid", valid, 0x100, 0x20, true, 0xc89295ffa7dccee7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_LOCK_HEADER.LockMdlSwitchedTree", lock_mdl_switched_tree, 0x40, 0x40, true, 0x51ad454e847bb735)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif