#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_RECEIVE_QUEUE_COUNTER.PacketsReceived", packets_received, 0x0, 0x40, true, 0xa2497d61a80f745e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_RECEIVE_QUEUE_COUNTER.BytesReceived", bytes_received, 0x40, 0x40, true, 0xd0ab1c7236a07761)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_RECEIVE_QUEUE_COUNTER.PacketsDropped", packets_dropped, 0x80, 0x40, true, 0xb895d3b2f9dfd9b1)
#else
#define _m00
#define _m01
#define _m02
#endif