#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_FILTER_PARAMETERS.Header", header, 0x0, 0x20, true, 0xe2c23b587bd1a801)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x57a45e02e2688d02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.MatchProfileId", match_profile_id, 0x40, 0x20, true, 0xb3407f8ae37006a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.Priority", priority, 0x60, 0x20, true, 0xec6977ac9e99289b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_counter_handle_t*), "_NDIS_PD_FILTER_PARAMETERS.CounterHandle", counter_handle, 0x80, 0x40, true, 0x4a8301bbcb8de085)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_queue_t*), "_NDIS_PD_FILTER_PARAMETERS.TargetReceiveQueue", target_receive_queue, 0xc0, 0x40, true, 0x316e3a00368db80b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_FILTER_PARAMETERS.RxFilterContext", rx_filter_context, 0x100, 0x40, true, 0x20bc81dcd131d281)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_PD_FILTER_PARAMETERS.HeaderGroupMatchArray", header_group_match_array, 0x140, 0x40, true, 0x33a0c828fb1fe927)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.HeaderGroupMatchArrayNumElements", header_group_match_array_num_elements, 0x180, 0x20, true, 0xeb773bd2bc461d10)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.HeaderGroupMatchArrayElementSize", header_group_match_array_element_size, 0x1a0, 0x20, true, 0x3a66af9c83f8866f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_FILTER_PARAMETERS.HeaderGroupMatchArrayTotalSize", header_group_match_array_total_size, 0x1c0, 0x20, true, 0xf8f3c3365318db71)
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
#endif