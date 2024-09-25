#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KEY_EVENT_RECORD.bKeyDown", b_key_down, 0x0, 0x20, true, 0x1cbd641b08288071)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KEY_EVENT_RECORD.wRepeatCount", w_repeat_count, 0x20, 0x10, true, 0x24dd48e8ac810496)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KEY_EVENT_RECORD.wVirtualKeyCode", w_virtual_key_code, 0x30, 0x10, true, 0x3f1283c983b5bbd2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KEY_EVENT_RECORD.wVirtualScanCode", w_virtual_scan_code, 0x40, 0x10, true, 0xbb617f52c596d02b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t), "_KEY_EVENT_RECORD.uChar.UnicodeChar", unicode_char, 0x0, 0x10, true, 0x27ef48a44f7e0703)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KEY_EVENT_RECORD.uChar.AsciiChar", ascii_char, 0x0, 0x8, true, 0x526279cb8bb5b283)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u_char_t), "_KEY_EVENT_RECORD.uChar", u_char, 0x50, 0x10, true, 0x70be29523b0bf1a3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_EVENT_RECORD.dwControlKeyState", dw_control_key_state, 0x60, 0x20, true, 0x533230342f6db546)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif