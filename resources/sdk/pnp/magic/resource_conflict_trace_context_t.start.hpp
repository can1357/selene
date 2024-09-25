#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.ResourceType", resource_type, 0x0, 0x8, true, 0xffee9062c8799e7e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.AlternativeCount", alternative_count, 0x20, 0x20, true, 0x8d1dfacc0a1ab1af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t*), "_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.ResourceRequests", resource_requests, 0x40, 0x40, true, 0x7e892f6fddafd786)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PNP_RESOURCE_CONFLICT_TRACE_CONTEXT.ArbiterInstance", arbiter_instance, 0x80, 0x40, true, 0xb35ea1523a93e083)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif