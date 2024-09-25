#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NETIO_NET_BUFFER_LIST_CONTEXT.ReferenceCount", reference_count, 0x0, 0x20, true, 0x6fbc700e3c5c2691)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NETIO_NET_BUFFER_LIST_CONTEXT.Parent", parent, 0x40, 0x40, true, 0x276551fd894dec34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::net_buffer_list_t*, uint32_t, uint8_t)>*), "_NETIO_NET_BUFFER_LIST_CONTEXT.CompletionRoutine", completion_routine, 0x80, 0x40, true, 0x3a0d68e1459e3097)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NETIO_NET_BUFFER_LIST_CONTEXT.CompletionContext", completion_context, 0xc0, 0x40, true, 0x32946c5a769e9b0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif