#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_QUEUE_PARAMETERS.Header", header, 0x0, 0x20, true, 0xa82f402a6baf96b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xc799a081700b806d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pd_queue_type_t), "_NDIS_PD_QUEUE_PARAMETERS.QueueType", queue_type, 0x40, 0x20, true, 0xa1b0be0247ae5e67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_PARAMETERS.QueueSize", queue_size, 0x60, 0x20, true, 0x132e6c6210da9b35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_PARAMETERS.ReceiveDataLength", receive_data_length, 0x80, 0x20, true, 0x15e8d26ee759b44b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_NDIS_PD_QUEUE_PARAMETERS.Affinity", affinity, 0xc0, 0x80, true, 0x4d95d34b8471b8cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_PARAMETERS.TrafficClassId", traffic_class_id, 0x140, 0x20, true, 0xbe3ebb1d6c7fc5c1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_QUEUE_PARAMETERS.MaximumPartialBufferCount", maximum_partial_buffer_count, 0x160, 0x20, true, 0x76bf333ca4d994e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_counter_handle_t*), "_NDIS_PD_QUEUE_PARAMETERS.CounterHandle", counter_handle, 0x180, 0x40, true, 0xb009d8de920befd9)
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
#endif