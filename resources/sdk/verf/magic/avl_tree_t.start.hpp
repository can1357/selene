#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_AVL_TREE.NodeRangeSize", node_range_size, 0x0, 0x40, true, 0xa2e1c9faac140b91)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_VF_AVL_TREE.NodeCount", node_count, 0x40, 0x40, true, 0x29b5ee47fed23516)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::avl_table_t*), "_VF_AVL_TREE.Tables", tables, 0x80, 0x40, true, 0x9bd90e83772761be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_AVL_TREE.TablesNo", tables_no, 0xc0, 0x20, true, 0xc4b87b1fa0156807)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VF_AVL_TREE.UseSessionId", use_session_id, 0xe0, 0x8, true, 0xf0de8782aff0e1e3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_AVL_TREE.NodeSize", node_size, 0x100, 0x20, true, 0xa7785ff670270076)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_AVL_TREE.UseLookaside", use_lookaside, 0x100, 0x20, true, 0x127de1de9918e124)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif