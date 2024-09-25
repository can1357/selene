#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::hardware_counter_type_t), "_HARDWARE_COUNTER_DATA.Type", type, 0x0, 0x20, true, 0xe746140ba9aa745e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HARDWARE_COUNTER_DATA.Value", value, 0x40, 0x40, true, 0x578944d6b727288)
#else
#define _m00
#define _m01
#endif