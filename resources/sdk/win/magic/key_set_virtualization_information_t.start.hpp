#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_VIRTUALIZATION_INFORMATION.VirtualTarget", virtual_target, 0x0, 0x1, true, 0x28757ae15a7a1af7, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_VIRTUALIZATION_INFORMATION.VirtualStore", virtual_store, 0x1, 0x1, true, 0x60436e88356d2d21, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KEY_SET_VIRTUALIZATION_INFORMATION.VirtualSource", virtual_source, 0x2, 0x1, true, 0xa09bd473eee267eb, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif