#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANE_OVERLAY_FLAGS.VerticalFlip", vertical_flip, 0x0, 0x1, true, 0x1f34bbb2579604e6, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANE_OVERLAY_FLAGS.HorizontalFlip", horizontal_flip, 0x1, 0x1, true, 0x4c2478a27a5aab5e, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_FLAGS.Value", value, 0x0, 0x20, true, 0xcee9bd5ad8b74d5)
#else
#define _m00
#define _m01
#define _m02
#endif