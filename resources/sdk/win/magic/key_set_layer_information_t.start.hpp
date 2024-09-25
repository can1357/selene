#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_LAYER_INFORMATION.IsTombstone", is_tombstone, 0x0, 0x1, true, 0xbf3d37d6ec46e5ea, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_LAYER_INFORMATION.IsSupersedeLocal", is_supersede_local, 0x1, 0x1, true, 0x6ed551c617af1e95, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_LAYER_INFORMATION.IsSupersedeTree", is_supersede_tree, 0x2, 0x1, true, 0x5c34cf23776f803f, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_LAYER_INFORMATION.ClassIsInherited", class_is_inherited, 0x3, 0x1, true, 0x69a2c869e562363d, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif