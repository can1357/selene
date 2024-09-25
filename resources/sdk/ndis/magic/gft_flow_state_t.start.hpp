#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_STATE.TcpSeqNum", tcp_seq_num, 0x0, 0x20, true, 0x61096ec302f6afcb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_STATE.TcpAckNum", tcp_ack_num, 0x20, 0x20, true, 0x55e382181602716d)
#else
#define _m00
#define _m01
#endif