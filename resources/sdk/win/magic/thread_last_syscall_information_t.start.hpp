#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THREAD_LAST_SYSCALL_INFORMATION.FirstArgument", first_argument, 0x0, 0x40, true, 0xa8c9979f61dcb445)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_THREAD_LAST_SYSCALL_INFORMATION.SystemCallNumber", system_call_number, 0x40, 0x10, true, 0x31b8353a25f560c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_LAST_SYSCALL_INFORMATION.WaitTime", wait_time, 0x80, 0x40, true, 0xf3e0a7f9e813ac90)
#else
#define _m00
#define _m01
#define _m02
#endif