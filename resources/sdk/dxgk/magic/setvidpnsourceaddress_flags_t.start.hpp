#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.ModeChange", mode_change, 0x0, 0x1, true, 0x9c1b2f44679c99f3, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.FlipImmediate", flip_immediate, 0x1, 0x1, true, 0xa09a5c558104159e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.FlipOnNextVSync", flip_on_next_v_sync, 0x2, 0x1, true, 0xe394cc1dd1be949b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.FlipStereo", flip_stereo, 0x3, 0x1, true, 0x102d66c27e70b350, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.FlipStereoTemporaryMono", flip_stereo_temporary_mono, 0x4, 0x1, true, 0x72ab248f34f7b86f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.FlipStereoPreferRight", flip_stereo_prefer_right, 0x5, 0x1, true, 0xe94a38398911433a, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.SharedPrimaryTransition", shared_primary_transition, 0x6, 0x1, true, 0x3532cd880a14aa32, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.IndependentFlipExclusive", independent_flip_exclusive, 0x7, 0x1, true, 0x696b46c61231023c, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.MoveFlip", move_flip, 0x8, 0x1, true, 0xd888462dee912ed7, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.Value", value, 0x0, 0x20, true, 0x6e691233d687a96f)
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
#endif