#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_STANDARD_COLORIMETRY_FLAGS.BT2020YCC", bt2020ycc, 0x0, 0x1, true, 0xa40ceecc471f583, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_STANDARD_COLORIMETRY_FLAGS.BT2020RGB", bt2020rgb, 0x1, 0x1, true, 0x320d043f9720377, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_STANDARD_COLORIMETRY_FLAGS.ST2084", st2084, 0x2, 0x1, true, 0xe103892eb11c1272, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_STANDARD_COLORIMETRY_FLAGS.Value", value, 0x0, 0x20, true, 0x1b0d97ad354be720)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif