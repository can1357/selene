#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_ACCESS_TOKEN.Token", token, 0x0, 0x40, true, 0x2a1dcbf1d0324ce9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_ACCESS_TOKEN.Thread", thread, 0x40, 0x40, true, 0x25d7112b04a39ea7)
#else
#define _m00
#define _m01
#endif