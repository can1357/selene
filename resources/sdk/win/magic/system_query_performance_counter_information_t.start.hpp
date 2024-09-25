#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_QUERY_PERFORMANCE_COUNTER_INFORMATION.Version", version, 0x0, 0x20, true, 0xd7171f28c8231a73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::query_performance_counter_flags_t), "_SYSTEM_QUERY_PERFORMANCE_COUNTER_INFORMATION.Flags", flags, 0x20, 0x20, true, 0x3c7b0aff0d14a430)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::query_performance_counter_flags_t), "_SYSTEM_QUERY_PERFORMANCE_COUNTER_INFORMATION.ValidFlags", valid_flags, 0x40, 0x20, true, 0x223975b105a5ebd1)
#else
#define _m00
#define _m01
#define _m02
#endif