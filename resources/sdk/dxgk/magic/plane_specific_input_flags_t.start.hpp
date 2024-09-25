#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.Enabled", enabled, 0x0, 0x1, true, 0xf5ce2c6558a1c9dc, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.FlipImmediate", flip_immediate, 0x1, 0x1, true, 0xf7692794138bb81f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.FlipOnNextVSync", flip_on_next_v_sync, 0x2, 0x1, true, 0x897d4c62be0529ee, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.SharedPrimaryTransition", shared_primary_transition, 0x3, 0x1, true, 0x5e993e3bddf922e3, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.IndependentFlipExclusive", independent_flip_exclusive, 0x4, 0x1, true, 0x297934fc8a8159e1, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.FlipImmediateNoTearing", flip_immediate_no_tearing, 0x5, 0x1, true, 0x73b8feabe990b917, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.Value", value, 0x0, 0x20, true, 0x9a563421b1deb7c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif