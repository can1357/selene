#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.Header", header, 0x0, 0x20, true, 0xdd2046dfdc0983d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x710ba50aa6a6010e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_filter_type_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.FilterType", filter_type, 0x40, 0x20, true, 0x428baf6fa26e80bb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.QueueId", queue_id, 0x60, 0x20, true, 0x769cc43dde166cac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.FilterId", filter_id, 0x80, 0x20, true, 0xda6eda9f398290ee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.FieldParametersArrayOffset", field_parameters_array_offset, 0xa0, 0x20, true, 0xb011685d5c8d2672)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.FieldParametersArrayNumElements", field_parameters_array_num_elements, 0xc0, 0x20, true, 0x28a19a1114f5f9d0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.FieldParametersArrayElementSize", field_parameters_array_element_size, 0xe0, 0x20, true, 0xb9e9a5353cc12779)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.RequestedFilterIdBitCount", requested_filter_id_bit_count, 0x100, 0x20, true, 0x596d15aeb61c26b6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.MaxCoalescingDelay", max_coalescing_delay, 0x120, 0x20, true, 0x8a575d3ec1b0f8a4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_PARAMETERS.VPortId", v_port_id, 0x140, 0x20, true, 0x6a3e5ef155850a5d)
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