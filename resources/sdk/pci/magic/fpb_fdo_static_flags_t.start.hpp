#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_FDO_STATIC_FLAGS.Initialized", initialized, 0x0, 0x1, true, 0xd6c0ec8652fb4684, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FPB_FDO_STATIC_FLAGS.IsRootNode", is_root_node, 0x1, 0x1, true, 0xe1d1a33ced15e5c4, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FPB_FDO_STATIC_FLAGS.FlagsAsULONG", flags_as_ulong, 0x0, 0x20, true, 0xfffaa0b6dad6b475)
#else
#define _m00
#define _m01
#define _m02
#endif