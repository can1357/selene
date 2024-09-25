#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_CURSOR_ATTRIBUTES.Width", width, 0x0, 0x10, true, 0x78a6f5fabaa25beb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_CURSOR_ATTRIBUTES.Height", height, 0x10, 0x10, true, 0x44281d34335c1857)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_CURSOR_ATTRIBUTES.Column", column, 0x20, 0x10, true, 0x85aafc6bf2de6b7b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_VIDEO_CURSOR_ATTRIBUTES.Row", row, 0x30, 0x10, true, 0x1199b53159dff603)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_CURSOR_ATTRIBUTES.Rate", rate, 0x40, 0x8, true, 0x400fdd687f206108)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_CURSOR_ATTRIBUTES.Enable", enable, 0x48, 0x8, true, 0xe7005d4b8e2e361f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif