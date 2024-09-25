#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_TRANSMIT_QUEUE_COUNTER.PacketsTransmitted", packets_transmitted, 0x0, 0x40, true, 0x5da2fec328dce214)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PD_TRANSMIT_QUEUE_COUNTER.BytesTransmitted", bytes_transmitted, 0x40, 0x40, true, 0x6935df9b61c47e38)
#else
#define _m00
#define _m01
#endif