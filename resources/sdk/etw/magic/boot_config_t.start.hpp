#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_BOOT_CONFIG.MaxLoggers", max_loggers, 0x0, 0x0, false, 0x8fda910decf8ad7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_BOOT_CONFIG.BootLoggersList", boot_loggers_list, 0x0, 0x0, false, 0x7e91d4d8cfe0c26c)
#else
#define _m00
#define _m01
#endif