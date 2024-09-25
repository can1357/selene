#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.VerticalFlip", vertical_flip, 0x0, 0x1, true, 0xa88299d460cc297c, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.HorizontalFlip", horizontal_flip, 0x1, 0x1, true, 0xe53e80836153afaf, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.Value", value, 0x0, 0x20, true, 0x6f5ecf38f603935c)
#else
#define _m00
#define _m01
#define _m02
#endif