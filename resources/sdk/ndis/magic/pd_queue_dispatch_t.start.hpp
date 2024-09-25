#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_QUEUE_DISPATCH.Header", header, 0x0, 0x20, true, 0x1ff00fd8b9cd92b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_DISPATCH.Flags", flags, 0x20, 0x20, true, 0x771433bd0f22bb54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_queue_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t***, uint32_t)>*), "_NDIS_PD_QUEUE_DISPATCH.PDPostAndDrainBufferList", pd_post_and_drain_buffer_list, 0x40, 0x40, true, 0x9f70f52a36a8af15)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct ndis::pd_queue_t*, uint64_t*)>*), "_NDIS_PD_QUEUE_DISPATCH.PDQueryQueueDepth", pd_query_queue_depth, 0x80, 0x40, true, 0xe811247769f1a74e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_queue_t*)>*), "_NDIS_PD_QUEUE_DISPATCH.PDFlushQueue", pd_flush_queue, 0xc0, 0x40, true, 0xac44d454d8359b86)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_queue_t*, struct ndis::pd_post_and_drain_arg_t*)>*), "_NDIS_PD_QUEUE_DISPATCH.PDPostAndDrainBufferListEx", pd_post_and_drain_buffer_list_ex, 0x100, 0x40, true, 0x8fb74b900584215e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif