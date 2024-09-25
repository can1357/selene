#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::hardware_counter_type_t), "_COUNTER_READING.Type", type, 0x0, 0x20, true, 0x32b50bbb123e2b08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COUNTER_READING.Index", index, 0x20, 0x20, true, 0xb2933939600d66ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_COUNTER_READING.Start", start, 0x40, 0x40, true, 0xf34373022a7bdc36)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_COUNTER_READING.Total", total, 0x80, 0x40, true, 0xa79ca2bb4d0f9568)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif