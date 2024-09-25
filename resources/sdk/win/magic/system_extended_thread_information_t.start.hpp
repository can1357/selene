#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_thread_information_t), "_SYSTEM_EXTENDED_THREAD_INFORMATION.ThreadInfo", thread_info, 0x0, 0x80, true, 0x7c5906d7ecd906be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_EXTENDED_THREAD_INFORMATION.StackBase", stack_base, 0x280, 0x40, true, 0xacbe056a67e064fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_EXTENDED_THREAD_INFORMATION.StackLimit", stack_limit, 0x2c0, 0x40, true, 0x64ffebc688fcb72c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_EXTENDED_THREAD_INFORMATION.Win32StartAddress", win32_start_address, 0x300, 0x40, true, 0x515b73fc44f716bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_EXTENDED_THREAD_INFORMATION.TebBase", teb_base, 0x340, 0x40, true, 0xa9231e4dacc230fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif