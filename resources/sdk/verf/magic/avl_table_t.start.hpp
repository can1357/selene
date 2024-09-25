#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_table_t), "_VF_AVL_TABLE.RtlTable", rtl_table, 0x0, 0x40, true, 0x6f38b2e2ab252c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::avl_tree_node_t*), "_VF_AVL_TABLE.ReservedNode", reserved_node, 0x340, 0x40, true, 0xb2881d4f5d668148)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VF_AVL_TABLE.NodeToFree", node_to_free, 0x380, 0x40, true, 0x8591085aacefcb43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_VF_AVL_TABLE.Lock", lock, 0x400, 0x20, true, 0x82144235ccc3e07)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif