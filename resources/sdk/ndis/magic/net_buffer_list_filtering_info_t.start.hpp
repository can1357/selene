#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.FilterId", filter_id, 0x0, 0x10, true, 0x6411e35084a635a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.QueueVPortInfo.QueueId", queue_id, 0x0, 0x10, true, 0xd4fcc5dcd5109965)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.QueueVPortInfo.VPortId", v_port_id, 0x0, 0x10, true, 0x8a3b0481152c525c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_queue_v_port_info_t), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo.QueueVPortInfo", queue_v_port_info, 0x10, 0x10, true, 0x207fa14d1fcf257d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_filtering_info_t), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.FilteringInfo", filtering_info, 0x0, 0x20, true, 0x46b683c5eab7fe36)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_FILTERING_INFO.Value", value, 0x0, 0x40, true, 0x75db4dc77bfe0c29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif