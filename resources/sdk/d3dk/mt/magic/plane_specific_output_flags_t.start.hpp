#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS.FlipConvertedToImmediate", flip_converted_to_immediate, 0x0, 0x1, true, 0x9140b44810a77d2b, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS.Value", value, 0x0, 0x20, true, 0x1c6b1258672a8890)
#else
#define _m00
#define _m01
#endif