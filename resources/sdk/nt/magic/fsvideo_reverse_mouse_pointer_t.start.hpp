#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::fscntl_screen_info_t), "_FSVIDEO_REVERSE_MOUSE_POINTER.Screen", screen, 0x0, 0x60, true, 0x51d5d11632d8a98f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSVIDEO_REVERSE_MOUSE_POINTER.dwType", dw_type, 0x60, 0x20, true, 0xf107425ae5dc931)
#else
#define _m00
#define _m01
#endif