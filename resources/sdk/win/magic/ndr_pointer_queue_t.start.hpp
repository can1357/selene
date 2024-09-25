#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_stub_message_t*), "NDR_POINTER_QUEUE.pStubMsg", p_stub_msg, 0x0, 0x40, true, 0xa552df839d3238b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_pointer_queue_state_t*), "NDR_POINTER_QUEUE.pQueueState", p_queue_state, 0x40, 0x40, true, 0x735398617444740c)
#else
#define _m00
#define _m01
#endif