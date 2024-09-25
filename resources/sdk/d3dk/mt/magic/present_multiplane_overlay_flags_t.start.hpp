#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipStereo", flip_stereo, 0x0, 0x1, true, 0x5259e0da1624e138, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipStereoTemporaryMono", flip_stereo_temporary_mono, 0x1, 0x1, true, 0xc2aaff470c0f2c9a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipStereoPreferRight", flip_stereo_prefer_right, 0x2, 0x1, true, 0x2150eddc7a16288e, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipDoNotWait", flip_do_not_wait, 0x3, 0x1, true, 0x655114b8fb92ea6, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipDoNotFlip", flip_do_not_flip, 0x4, 0x1, true, 0x4ce29a0d851be638, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.FlipRestart", flip_restart, 0x5, 0x1, true, 0xd401cab4465df5f5, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.DurationValid", duration_valid, 0x6, 0x1, true, 0xb5eff4233cedb71a, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.HDRMetaDataValid", hdr_meta_data_valid, 0x7, 0x1, true, 0xb08fcb7dbddbb9f5, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.HMD", hmd, 0x8, 0x1, true, 0x92cd778a2d9780f2, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.TrueImmediate", true_immediate, 0x9, 0x1, true, 0x19a5d909b681f5dc, 1, uint32_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.Value", value, 0x0, 0x20, true, 0xd0951cf868ce8cf8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif