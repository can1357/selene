#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xb3f475122982e9b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x896ba1f3b4890f56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.InitiateOffloadHandler", initiate_offload_handler, 0x40, 0x40, true, 0x2d108173a36aa265)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.TerminateOffloadHandler", terminate_offload_handler, 0x80, 0x40, true, 0x5700a64145f434e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.UpdateOffloadHandler", update_offload_handler, 0xc0, 0x40, true, 0x260729f979b3ccb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.InvalidateOffloadHandler", invalidate_offload_handler, 0x100, 0x40, true, 0x96b884dae5956148)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_GENERIC_CHARACTERISTICS.QueryOffloadHandler", query_offload_handler, 0x140, 0x40, true, 0x9896797bc471ad95)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif