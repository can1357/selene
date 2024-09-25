#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int4_t), "_DXGK_DISPLAY_OWNERSHIP_FLAGS.FrameBufferState", frame_buffer_state, 0x0, 0x4, true, 0xb9575f4de7a29f51, 4, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_OWNERSHIP_FLAGS.Value", value, 0x0, 0x20, true, 0x1b726645d10aaaa5)
#else
#define _m00
#define _m01
#endif