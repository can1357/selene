#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "_TREE_NODE.Link", link, 0x0, 0xc0, true, 0x5a42199d5268437)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_root_t*), "_TREE_NODE.TreeRoot", tree_root, 0xc0, 0x40, true, 0x6629ec663b592756)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TREE_NODE.Key1", key1, 0x100, 0x40, true, 0x633e3bdff800e66c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TREE_NODE.Key2", key2, 0x140, 0x40, true, 0x6d7c11c12d26f577)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TREE_NODE.Flags", flags, 0x180, 0x20, true, 0xd9a086b5f30c9d9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif