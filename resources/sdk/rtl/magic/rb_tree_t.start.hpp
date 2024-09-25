#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t*), "_RTL_RB_TREE.Root", root, 0x0, 0x40, true, 0x4fdbe0f074308d35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t*), "_RTL_RB_TREE.Min", min, 0x40, 0x40, true, 0x5f78799a7ad43c93)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_RB_TREE.Encoded", encoded, 0x40, 0x1, true, 0x24f6b996fa3cf677, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif