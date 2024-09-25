#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_receive_queue_counter_t), "_NDIS_PD_COUNTER_VALUE.ReceiveQueue", receive_queue, 0x0, 0xc0, true, 0xd03a5d5d66a28deb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_transmit_queue_counter_t), "_NDIS_PD_COUNTER_VALUE.TransmitQueue", transmit_queue, 0x0, 0x80, true, 0xcb64fc78d1fabd53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_filter_counter_t), "_NDIS_PD_COUNTER_VALUE.Filter", filter, 0x0, 0x80, true, 0x8322c296b35ee30e)
#else
#define _m00
#define _m01
#define _m02
#endif