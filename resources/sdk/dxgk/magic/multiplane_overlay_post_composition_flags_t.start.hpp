#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.VerticalFlip", vertical_flip, 0x0, 0x1, true, 0x295017eb8962aaf0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.HorizontalFlip", horizontal_flip, 0x1, 0x1, true, 0x345f0523e8392d55, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.Value", value, 0x0, 0x20, true, 0xf25587808a91d7bb)
#else
#define _m00
#define _m01
#define _m02
#endif