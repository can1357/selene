#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t*), "_ETW_SILO_TRACING_BLOCK.ProcessorBuffers", processor_buffers, 0x0, 0x40, true, 0x4663c2c008e5ca2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_ETW_SILO_TRACING_BLOCK.EventsLoggedCount", events_logged_count, 0x40, 0x40, true, 0x4b1ffc29d2060468)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_ETW_SILO_TRACING_BLOCK.QpcDelta", qpc_delta, 0x80, 0x40, true, 0xfc56c41d4ba7ddef)
#else
#define _m00
#define _m01
#define _m02
#endif