#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KEY_PID_ARRAY.PID", pid, 0x0, 0x40, true, 0x7a299cf641acb9af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "KEY_PID_ARRAY.KeyName", key_name, 0x40, 0x80, true, 0x4f5441d1ea8d2996)
#else
#define _m00
#define _m01
#endif