#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_MMINPAGE_SUPPORT_FLOW_THROUGH.Page", page, 0x0, 0x40, true, 0x38ea6b2385aea7da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mminpage_support_t*), "_MMINPAGE_SUPPORT_FLOW_THROUGH.InitialInPageSupport", initial_in_page_support, 0x40, 0x40, true, 0xcde307d885c218b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpaging_file_t*), "_MMINPAGE_SUPPORT_FLOW_THROUGH.PagingFile", paging_file, 0x80, 0x40, true, 0xe1b29038c9a49944)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMINPAGE_SUPPORT_FLOW_THROUGH.PageFileOffset", page_file_offset, 0xc0, 0x40, true, 0xe13a21de118271d2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MMINPAGE_SUPPORT_FLOW_THROUGH.Node", node, 0x100, 0xc0, true, 0xe40ce8ef31df49e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif