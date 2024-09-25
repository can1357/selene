#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKCB_NOTIFY_MPO_VSYNC_FLAGS.PostPresentNeeded", post_present_needed, 0x0, 0x1, true, 0xa3c52b0d4813ef3d, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKCB_NOTIFY_MPO_VSYNC_FLAGS.Value", value, 0x0, 0x20, true, 0x9ed64400b354750a)
#else
#define _m00
#define _m01
#endif