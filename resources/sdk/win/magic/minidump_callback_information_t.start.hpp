#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(minidump_callback_routine_t ), "_MINIDUMP_CALLBACK_INFORMATION.CallbackRoutine", callback_routine, 0x0, 0x40, true, 0xe0c1af7be68f059)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MINIDUMP_CALLBACK_INFORMATION.CallbackParam", callback_param, 0x40, 0x40, true, 0x6042ae4e28d307e4)
#else
#define _m00
#define _m01
#endif