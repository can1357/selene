#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t*), "_RTL_BALANCED_LINKS.Parent", parent, 0x0, 0x40, true, 0xe6b75357363429e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t*), "_RTL_BALANCED_LINKS.LeftChild", left_child, 0x40, 0x40, true, 0x10258efbd94932d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_links_t*), "_RTL_BALANCED_LINKS.RightChild", right_child, 0x80, 0x40, true, 0x769bd81e6ca52151)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_RTL_BALANCED_LINKS.Balance", balance, 0xc0, 0x8, true, 0x263a1feb3c905bc9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif