#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_list_entry_t*), "_STOR_LIST_ENTRY.Flink", flink, 0x0, 0x40, true, 0x398d02aeae71ec54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_list_entry_t*), "_STOR_LIST_ENTRY.Blink", blink, 0x40, 0x40, true, 0x6e1d3ee5faa3c015)
#else
#define _m00
#define _m01
#endif