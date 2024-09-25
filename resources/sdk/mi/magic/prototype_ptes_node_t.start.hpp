#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_PROTOTYPE_PTES_NODE.Node", node, 0x0, 0xc0, true, 0x852334a2b3bb5720)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_PROTOTYPE_PTES_NODE.AllocationType", allocation_type, 0xc0, 0x3, true, 0xe5f8cbd524397acc, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_PROTOTYPE_PTES_NODE.Inserted", inserted, 0xc3, 0x1, true, 0xf0e71754d2c122f, 1, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PROTOTYPE_PTES_NODE.PrototypePtesFlags", prototype_ptes_flags, 0xc0, 0x40, true, 0x26a858bde81d1520)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif