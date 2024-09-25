#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_POINTER_POSITION.Column", column, 0x0, 0x10, true, 0xecf17336c7edd7aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_POINTER_POSITION.Row", row, 0x10, 0x10, true, 0xd7e97edc54077e01)
#else
#define _m00
#define _m01
#endif