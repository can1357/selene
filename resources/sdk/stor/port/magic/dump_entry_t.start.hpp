#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t*), "_DUMP_ENTRY.Flink", flink, 0x0, 0x40, true, 0xa917caf2c45e4b81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t*), "_DUMP_ENTRY.Blink", blink, 0x40, 0x40, true, 0x11ddd360d1073907)
#else
#define _m00
#define _m01
#endif