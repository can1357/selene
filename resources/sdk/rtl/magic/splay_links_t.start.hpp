#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "_RTL_SPLAY_LINKS.Parent", parent, 0x0, 0x40, true, 0xbf7bc3fa86207840)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "_RTL_SPLAY_LINKS.LeftChild", left_child, 0x40, 0x40, true, 0x9a1612e55da7429c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t*), "_RTL_SPLAY_LINKS.RightChild", right_child, 0x80, 0x40, true, 0x66d6ccf71f5dba6d)
#else
#define _m00
#define _m01
#define _m02
#endif