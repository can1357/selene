#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.Header", header, 0x0, 0x20, true, 0xfa5fdfc512623eff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xac16cb63f1d5794e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.QueueId", queue_id, 0x40, 0x20, true, 0x5895d26132454aae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::shared_memory_usage_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.SharedMemoryUsage", shared_memory_usage, 0x60, 0x20, true, 0xab21809045a7fd4d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.Mdl", mdl, 0x80, 0x40, true, 0x42711010e12756d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.CurrentVa", current_va, 0xc0, 0x40, true, 0x2f7acf6aa2ce0629)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.Length", length, 0x100, 0x20, true, 0xc8a1adc199e03b16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.ProcessSGListHandler", process_sg_list_handler, 0x140, 0x40, true, 0x53ef7389acb747d1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.Context", context, 0x180, 0x40, true, 0xef31031f6fe540ae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.ScatterGatherListBuffer", scatter_gather_list_buffer, 0x1c0, 0x40, true, 0x7374901f2c0988f1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.ScatterGatherListBufferSize", scatter_gather_list_buffer_size, 0x200, 0x20, true, 0xc84abe28214b6c0e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.ScatterGatherListBufferSizeNeeded", scatter_gather_list_buffer_size_needed, 0x220, 0x20, true, 0x49e558ccd34727b3)
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
#endif