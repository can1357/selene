#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.FlipStereo", flip_stereo, 0x0, 0x1, true, 0x57cd9ea40fb3486f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.FlipStereoTemporaryMono", flip_stereo_temporary_mono, 0x1, 0x1, true, 0xed3431d3422fcee2, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.FlipStereoPreferRight", flip_stereo_prefer_right, 0x2, 0x1, true, 0x55504c8c61b8750c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.RetryAtLowerIrql", retry_at_lower_irql, 0x3, 0x1, true, 0x52e863e2c4a32e3c, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS.Value", value, 0x0, 0x20, true, 0x2f2e021f3838bf3e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif