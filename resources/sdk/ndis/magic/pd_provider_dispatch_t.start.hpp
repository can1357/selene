#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_PROVIDER_DISPATCH.Header", header, 0x0, 0x20, true, 0x9d81d45c282e090e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_PROVIDER_DISPATCH.Flags", flags, 0x20, 0x20, true, 0x2c07e24368d7b19c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_queue_parameters_t*, struct ndis::pd_queue_t**)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDAllocateQueue", ndis_pd_allocate_queue, 0x40, 0x40, true, 0xcee8221bd0174c0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_queue_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDFreeQueue", ndis_pd_free_queue, 0x80, 0x40, true, 0x7ff8c42e6277c0fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_acquire_queues_parameters_t*, struct ndis::pd_queue_t**, uint32_t*, struct ndis::pd_queue_parameters_t*, uint32_t*, uint32_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDAcquireReceiveQueues", ndis_pd_acquire_receive_queues, 0xc0, 0x40, true, 0xa59e0f9b51015896)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_provider_handle_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDReleaseReceiveQueues", ndis_pd_release_receive_queues, 0x100, 0x40, true, 0xf0bef5ee4d886568)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_counter_parameters_t*, struct ndis::pd_counter_handle_t**)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDAllocateCounter", ndis_pd_allocate_counter, 0x140, 0x40, true, 0x2b6c1c978fe97259)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_counter_handle_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDFreeCounter", ndis_pd_free_counter, 0x180, 0x40, true, 0xc566fe692bb1e019)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_counter_handle_t*, union ndis::pd_counter_value_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDQueryCounter", ndis_pd_query_counter, 0x1c0, 0x40, true, 0xa36fc501a16ba7fd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_filter_parameters_t*, struct ndis::pd_filter_handle_t**)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDSetReceiveFilter", ndis_pd_set_receive_filter, 0x200, 0x40, true, 0x76fc5930a5c5e971)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_filter_handle_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDClearReceiveFilter", ndis_pd_clear_receive_filter, 0x240, 0x40, true, 0xcd42c0eb0b5aaa88)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_queue_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDRequestDrainNotification", ndis_pd_request_drain_notification, 0x280, 0x40, true, 0x6f5964ad6aaf82a6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_queue_t*, enum ndis::pd_control_type_t, enum ndis::pd_queue_control_code_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDQueueControl", ndis_pd_queue_control, 0x2c0, 0x40, true, 0x523526abf6ea7e91)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_provider_handle_t*, enum ndis::pd_control_type_t, enum ndis::pd_provider_control_code_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*), "_NDIS_PD_PROVIDER_DISPATCH.NdisPDProviderControl", ndis_pd_provider_control, 0x300, 0x40, true, 0x58dc8f4b53d801d4)
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
#endif