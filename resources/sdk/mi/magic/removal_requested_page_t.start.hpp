#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_REMOVAL_REQUESTED_PAGE.TreeNode", tree_node, 0x0, 0x0, false, 0x8e2d8e1b54ba6f57)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_REMOVAL_REQUESTED_PAGE.Link", link, 0x0, 0x0, false, 0x942bb2ae63af9df9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_REMOVAL_REQUESTED_PAGE.Pfn", pfn, 0x0, 0x0, false, 0x1a32de344a7437a6)
#else
#define _m00
#define _m01
#define _m02
#endif