#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS.Enabled", enabled, 0x0, 0x1, true, 0x56a7061967fc4d9f, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS.Value", value, 0x0, 0x20, true, 0xbf91b1cac5fcb404)
#else
#define _m00
#define _m01
#endif