#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::balanced_node_t*, 2>), "_RTL_BALANCED_NODE.Children", children, 0x0, 0x80, true, 0xf75f9f00239e3116)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t*), "_RTL_BALANCED_NODE.Left", left, 0x0, 0x40, true, 0x7588e3be71cc9c5f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t*), "_RTL_BALANCED_NODE.Right", right, 0x40, 0x40, true, 0x8ee1cacf76de2ff7)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_BALANCED_NODE.Red", red, 0x80, 0x1, true, 0x183c1cfe53799b9a, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_BALANCED_NODE.Balance", balance, 0x80, 0x2, true, 0x1b9d91cd17c585e0, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_BALANCED_NODE.ParentValue", parent_value, 0x80, 0x40, true, 0xd14f1ccaae54850b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif