#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::avl_tree_node_t), "_VF_AVL_TREE_NODE_EX.Base", base, 0x0, 0x80, true, 0xc07e63e2125b5813)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_AVL_TREE_NODE_EX.SessionId", session_id, 0x80, 0x20, true, 0xe03bc41ccfbc51ba)
#else
#define _m00
#define _m01
#endif