#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x7d88dd26ac4b4826)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0xd1c8a49808a69863)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.SendNetBufferListsHandler", send_net_buffer_lists_handler, 0x40, 0x40, true, 0x7bf386d53d898ed7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x80, 0x40, true, 0x967608f785f025ee)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.CancelSendNetBufferListsHandler", cancel_send_net_buffer_lists_handler, 0xc0, 0x40, true, 0x354357503ecf4709)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.ReceiveNetBufferListsHandler", receive_net_buffer_lists_handler, 0x100, 0x40, true, 0x1fb2e031deda3f40)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.ReturnNetBufferListsHandler", return_net_buffer_lists_handler, 0x140, 0x40, true, 0x34107122bb4648cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif