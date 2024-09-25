#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STACK_TABLE.NumStackTraces", num_stack_traces, 0x0, 0x10, true, 0x97e6e5e9a5c1b895)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STACK_TABLE.TraceCapacity", trace_capacity, 0x10, 0x10, true, 0x49dc95f96b5dd707)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::object_ref_trace_t*, 16>), "_STACK_TABLE.StackTrace", stack_trace, 0x40, 0x0, true, 0x901eddb635ed7b2a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 16381>), "_STACK_TABLE.StackTableHash", stack_table_hash, 0x440, 0xd0, true, 0x7088cb0a93bf5213)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif