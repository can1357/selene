#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_GET_STATS.LocalAddress", local_address, 0x0, 0x30, true, 0xc0410d1ef4a87f70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesSent", bytes_sent, 0x40, 0x20, true, 0x1dcf28673a363ed3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesRcvd", bytes_rcvd, 0x60, 0x20, true, 0x89f7c6b8972e0ebd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.FramesSent", frames_sent, 0x80, 0x20, true, 0xa17cb68c3991d800)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.FramesRcvd", frames_rcvd, 0xa0, 0x20, true, 0x45b0ee64f0afca4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.CRCErrors", crc_errors, 0xc0, 0x20, true, 0xf13442cc65cae659)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.TimeoutErrors", timeout_errors, 0xe0, 0x20, true, 0x9a2ac11b3fc64a5f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.AlignmentErrors", alignment_errors, 0x100, 0x20, true, 0x416c5d41083519b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.SerialOverrunErrors", serial_overrun_errors, 0x120, 0x20, true, 0x550d9628ca3a6373)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.FramingErrors", framing_errors, 0x140, 0x20, true, 0xf352c251886b64af)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BufferOverrunErrors", buffer_overrun_errors, 0x160, 0x20, true, 0xeba5a420ef7a2a15)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesTransmittedUncompressed", bytes_transmitted_uncompressed, 0x180, 0x20, true, 0x669e830e894b95ba)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesReceivedUncompressed", bytes_received_uncompressed, 0x1a0, 0x20, true, 0x46ad3ff0b8059e93)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesTransmittedCompressed", bytes_transmitted_compressed, 0x1c0, 0x20, true, 0xe61d2bb95b4dd851)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_GET_STATS.BytesReceivedCompressed", bytes_received_compressed, 0x1e0, 0x20, true, 0xa8080ce16264eee8)
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
#define _m14
#endif