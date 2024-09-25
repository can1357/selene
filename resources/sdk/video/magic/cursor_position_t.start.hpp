#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_CURSOR_POSITION.Column", column, 0x0, 0x10, true, 0x9797eee9fc192bb0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_CURSOR_POSITION.Row", row, 0x10, 0x10, true, 0xbd48e9f6bacf158d)
#else
#define _m00
#define _m01
#endif