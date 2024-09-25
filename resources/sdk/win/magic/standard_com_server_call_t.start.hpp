#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "StandardComServerCall._dwAptId", dw_apt_id, 0x6c0, 0x20, true, 0x71a5ab5ccea1a129)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "StandardComServerCall._bFreeThreaded", b_free_threaded, 0x6e0, 0x1, true, 0x619e9c8c78f39816, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "StandardComServerCall._bSubscribedServerTransportCallEvents", b_subscribed_server_transport_call_events, 0x6e1, 0x1, true, 0x423738ca21077dfc, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif