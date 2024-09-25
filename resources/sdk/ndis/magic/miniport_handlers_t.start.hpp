#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.RequestContext", request_context, 0x0, 0x40, true, 0x2af3c7cace53d548)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.CancelSendContext", cancel_send_context, 0x40, 0x40, true, 0x76b3ddb0f5d805ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.IndicateNetBufferListsContext", indicate_net_buffer_lists_context, 0x80, 0x40, true, 0x794737168c61b79a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_HANDLERS.IndicateNetBufferListsTracker", indicate_net_buffer_lists_tracker, 0xc0, 0x40, true, 0x2ae3dc24efb464dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_MINIPORT_HANDLERS.IndicateNetBufferListsObject", indicate_net_buffer_lists_object, 0x100, 0x40, true, 0xc7a872eb9fd9bccf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.SaveIndicateNetBufferListsContext", save_indicate_net_buffer_lists_context, 0x140, 0x40, true, 0x222a7bf9e775034a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.ReturnNetBufferListsContext", return_net_buffer_lists_context, 0x180, 0x40, true, 0xd612c2abbab3aa3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_HANDLERS.ReturnNetBufferListsTracker", return_net_buffer_lists_tracker, 0x1c0, 0x40, true, 0xc2819077196db54f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_MINIPORT_HANDLERS.ReturnNetBufferListsObject", return_net_buffer_lists_object, 0x200, 0x40, true, 0x3f990f0e92854248)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsContext", send_net_buffer_lists_context, 0x240, 0x40, true, 0x51399f6421c728e5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsTracker", send_net_buffer_lists_tracker, 0x280, 0x40, true, 0xf707afb646fcda14)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsObject", send_net_buffer_lists_object, 0x2c0, 0x40, true, 0x9bf74f7ce5c00ad3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsCompleteContext", send_net_buffer_lists_complete_context, 0x300, 0x40, true, 0xbbe19ad167aa526f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsCompleteTracker", send_net_buffer_lists_complete_tracker, 0x340, 0x40, true, 0x88f978d07c592433)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsCompleteObject", send_net_buffer_lists_complete_object, 0x380, 0x40, true, 0xd3540e47ac47524c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.RequestHandle", request_handle, 0x3c0, 0x40, true, 0xebf416c9803ca175)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_HANDLERS.CancelSendHandler", cancel_send_handler, 0x400, 0x40, true, 0x2c28b1da5e5b5413)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_HANDLERS.CancelSendPacketsHandler", cancel_send_packets_handler, 0x400, 0x40, true, 0x2ea5518b10579b27)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x440, 0x40, true, 0xb760952f17cbb828)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_HANDLERS.IndicateNetBufferListsHandler", indicate_net_buffer_lists_handler, 0x480, 0x40, true, 0x7cab512a68297f70)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_HANDLERS.SaveIndicateNetBufferListsHandler", save_indicate_net_buffer_lists_handler, 0x4c0, 0x40, true, 0xf4d40e4adaf15691)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_MINIPORT_HANDLERS.ReturnNetBufferListsHandler", return_net_buffer_lists_handler, 0x500, 0x40, true, 0x848d180257985be2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_HANDLERS.SendNetBufferListsHandler", send_net_buffer_lists_handler, 0x540, 0x40, true, 0x434c92117b33e8f7)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_HANDLERS.DirectRequestHandle", direct_request_handle, 0x580, 0x40, true, 0xcc2b9065b75651b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif