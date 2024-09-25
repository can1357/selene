#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::cursor_position_t), "_FSVIDEO_CURSOR_POSITION.Coord", coord, 0x0, 0x20, true, 0xc56fef575517cae9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSVIDEO_CURSOR_POSITION.dwType", dw_type, 0x20, 0x20, true, 0x8378a46eb6ec564)
#else
#define _m00
#define _m01
#endif