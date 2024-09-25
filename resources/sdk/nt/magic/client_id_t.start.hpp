#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLIENT_ID.UniqueProcess", unique_process, 0x0, 0x40, true, 0xc309acd6fa728155)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_CLIENT_ID.UniqueThread", unique_thread, 0x40, 0x40, true, 0x31a92ad5c9be7b1c)
#else
#define _m00
#define _m01
#endif