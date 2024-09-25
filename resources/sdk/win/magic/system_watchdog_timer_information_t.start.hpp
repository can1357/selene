#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::watchdog_information_class_t), "_SYSTEM_WATCHDOG_TIMER_INFORMATION.WdInfoClass", wd_info_class, 0x0, 0x20, true, 0x533c70d95a9c9f3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_WATCHDOG_TIMER_INFORMATION.DataValue", data_value, 0x20, 0x20, true, 0x141cc8ead932fdf7)
#else
#define _m00
#define _m01
#endif