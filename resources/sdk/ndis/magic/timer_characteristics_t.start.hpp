#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TIMER_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xe37790387187c0da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TIMER_CHARACTERISTICS.AllocationTag", allocation_tag, 0x20, 0x20, true, 0x65123fc6a01b712d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_NDIS_TIMER_CHARACTERISTICS.TimerFunction", timer_function, 0x40, 0x40, true, 0x186b45c540ea16a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TIMER_CHARACTERISTICS.FunctionContext", function_context, 0x80, 0x40, true, 0x4598a8936e04199d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif