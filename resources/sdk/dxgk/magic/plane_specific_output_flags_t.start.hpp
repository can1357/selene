#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS.FlipConvertedToImmediate", flip_converted_to_immediate, 0x0, 0x1, true, 0xbee3c599155d70d4, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS.PostPresentNeeded", post_present_needed, 0x1, 0x1, true, 0xbe7d3a6b21b09f86, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS.HsyncInterruptCompletion", hsync_interrupt_completion, 0x2, 0x1, true, 0x8bf93c95ceb71b4b, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS.Value", value, 0x0, 0x20, true, 0x5b2269ef0e4082f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif