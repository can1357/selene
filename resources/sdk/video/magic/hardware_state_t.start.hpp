#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::hardware_state_header_t*), "_VIDEO_HARDWARE_STATE.StateHeader", state_header, 0x0, 0x40, true, 0x5330761a12323d56)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HARDWARE_STATE.StateLength", state_length, 0x40, 0x20, true, 0xb1b4f43ec562257a)
#else
#define _m00
#define _m01
#endif