#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullDecryptSuccessCount", ull_decrypt_success_count, 0x0, 0x40, true, 0x4c1dda22264c91d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullDecryptFailureCount", ull_decrypt_failure_count, 0x40, 0x40, true, 0xa41e3360ce645048)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullTxPacketSuccessCount", ull_tx_packet_success_count, 0x80, 0x40, true, 0x6ebed457e57a8b3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullTxPacketFailureCount", ull_tx_packet_failure_count, 0xc0, 0x40, true, 0xe0d62406fe51010b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullRxPacketSuccessCount", ull_rx_packet_success_count, 0x100, 0x40, true, 0x5993a2ee9da232e3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DOT11_PEER_STATISTICS.ullRxPacketFailureCount", ull_rx_packet_failure_count, 0x140, 0x40, true, 0xb13ad227a657fb85)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif