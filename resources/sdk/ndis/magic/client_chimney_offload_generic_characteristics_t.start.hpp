#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0x40d1f5e0884f6150)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x43e6d505a97d9669)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x40, 0x40, true, 0xbd0b1be8804c41e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x80, 0x40, true, 0x4ea8d588536b783d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0xc0, 0x40, true, 0x5f5cab2d17cb9edc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x100, 0x40, true, 0xbb22e46c8daf76b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x140, 0x40, true, 0xa323f6a761eb3345)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_CLIENT_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x180, 0x40, true, 0x8e69d3cec3529993)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif