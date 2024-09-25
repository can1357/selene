#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_LEAP_SECOND_DATA_REGISTRY_ENTRY.Year", year, 0x0, 0x10, true, 0xf0fe2ccf3273cedb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_LEAP_SECOND_DATA_REGISTRY_ENTRY.Month", month, 0x10, 0x10, true, 0xded3181a3d71e909)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_LEAP_SECOND_DATA_REGISTRY_ENTRY.Day", day, 0x20, 0x10, true, 0x2324cc2674760e18)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_LEAP_SECOND_DATA_REGISTRY_ENTRY.Hour", hour, 0x30, 0x10, true, 0x9a2a58a04588d271)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_LEAP_SECOND_DATA_REGISTRY_ENTRY.Flags", flags, 0x40, 0x10, true, 0x7c8fb938165cc58f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif