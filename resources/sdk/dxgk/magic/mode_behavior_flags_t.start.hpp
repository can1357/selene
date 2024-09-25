#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MODE_BEHAVIOR_FLAGS.PrioritizeHDR", prioritize_hdr, 0x0, 0x1, true, 0x97b3ad2a39a41d97, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MODE_BEHAVIOR_FLAGS.ColorimetricControl", colorimetric_control, 0x1, 0x1, true, 0x46da4feaa4f0a8e4, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MODE_BEHAVIOR_FLAGS.Value", value, 0x0, 0x20, true, 0x273f9f45b40b84f1)
#else
#define _m00
#define _m01
#define _m02
#endif