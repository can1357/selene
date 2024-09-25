#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_LAYER_INFORMATION.IsTombstone", is_tombstone, 0x0, 0x1, true, 0xbb23562aecf56733, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_LAYER_INFORMATION.IsSupersedeLocal", is_supersede_local, 0x1, 0x1, true, 0xebb36308ba8afd18, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_LAYER_INFORMATION.IsSupersedeTree", is_supersede_tree, 0x2, 0x1, true, 0x54b70102891b1ac3, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_LAYER_INFORMATION.ClassIsInherited", class_is_inherited, 0x3, 0x1, true, 0x304ecdc41f0cfc3a, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif