#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::transport_and_server_calls_t), "StandardComClientCall._transportAndServerCalls", transport_and_server_calls, 0x580, 0x80, true, 0x26a96feceeca10be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "StandardComClientCall._guidCausality", guid_causality, 0x640, 0x80, true, 0x4aa18bb2fa69110)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "StandardComClientCall._bTransportCallHadCancelStatusAtFinalize", b_transport_call_had_cancel_status_at_finalize, 0x6c0, 0x1, true, 0xf2a01957c9339975, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif