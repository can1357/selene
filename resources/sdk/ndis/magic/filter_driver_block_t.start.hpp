#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_DRIVER_BLOCK.Header", header, 0x0, 0x20, true, 0x2fdf9775c1e664d2)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_driver_block_t*), "_NDIS_FILTER_DRIVER_BLOCK.NextFilterDriver", next_filter_driver, 0x40, 0x40, true, 0x9dc6ed0d5375b8cd)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_NDIS_FILTER_DRIVER_BLOCK.DriverObject", driver_object, 0x80, 0x40, true, 0x22631834cb20d4a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_FILTER_DRIVER_BLOCK.FilterQueue", filter_queue, 0xc0, 0x40, true, 0xb1eefb8bd8c16128)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_DRIVER_BLOCK.FilterDriverContext", filter_driver_context, 0x100, 0x40, true, 0x1514d1bf5cc8ca09)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_DRIVER_BLOCK.Lock", lock, 0x140, 0x40, true, 0x1226f34fa0fbb60a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_DRIVER_BLOCK.Flags", flags, 0x180, 0x20, true, 0xfc02ab1a25b0fd1b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_FILTER_DRIVER_BLOCK.DeviceList", device_list, 0x1c0, 0x80, true, 0xb4e3096d7f9bf954)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_ex_t), "_NDIS_FILTER_DRIVER_BLOCK.Ref", ref, 0x240, 0xc0, true, 0xd44e717402258aa1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_driver_characteristics_t), "_NDIS_FILTER_DRIVER_BLOCK.DefaultFilterCharacteristics", default_filter_characteristics, 0x300, 0x80, true, 0xebf2d06bcae12bd7)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_DRIVER_BLOCK.ImageName", image_name, 0xb00, 0x80, true, 0xa0fd50872f607dc5)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadReceiveReturnHandler", tcp_offload_receive_return_handler, 0xa80, 0x40, true, 0x7f547b6f2816174b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x0, 0x0, false, 0xdba189faea6e66d6)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x0, 0x0, false, 0xb7bdeba77d20b763)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0x0, 0x0, false, 0x1902de20a485dc04)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x0, 0x0, false, 0x757bce07cc0c41b7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x0, 0x0, false, 0x8a9b92e502381a82)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_FILTER_DRIVER_BLOCK.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x0, 0x0, false, 0x845fa5d4c440fbdc)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x0, 0x0, false, 0xb2835ab737bf8f4b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x0, 0x0, false, 0xc7a99d3e2165ed56)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x0, 0x0, false, 0x504f9aa60f04d2b2)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x0, 0x0, false, 0x96bbe2172e351e14)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadEventHandler", tcp_offload_event_handler, 0x0, 0x0, false, 0xa8adfd6b0b377238)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x0, 0x0, false, 0x6699b1bf5854338)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.InitiateOffloadHandler", initiate_offload_handler, 0x0, 0x0, false, 0xdb453b868b46c82e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.TerminateOffloadHandler", terminate_offload_handler, 0x0, 0x0, false, 0xe82d72a5967ec08b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.UpdateOffloadHandler", update_offload_handler, 0x0, 0x0, false, 0xf9b3e7fd2e44ee31)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.InvalidateOffloadHandler", invalidate_offload_handler, 0x0, 0x0, false, 0x7fa0004af6c54fce)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_DRIVER_BLOCK.QueryOffloadHandler", query_offload_handler, 0x0, 0x0, false, 0x4bc79841cecde451)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#endif