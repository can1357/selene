#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThisPart1.dwFlags", dw_flags, 0x0, 0x20, true, 0xea1fa05f89c2b62c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThisPart1.dwClientThread", dw_client_thread, 0x20, 0x20, true, 0x2264069b15665e79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_xmit_defs_0001_t), "WireLocalThisPart1.asyncRequestBlock", async_request_block, 0x140, 0x80, true, 0xab9215582a24747)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireLocalThisPart1.passthroughTraceActivity", passthrough_trace_activity, 0x40, 0x80, true, 0x95e77dade15b7eb2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireLocalThisPart1.callId", call_id, 0xc0, 0x80, true, 0xe6f883edea238458)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThisPart1.unique_pTouchedAstaArray", unique_p_touched_asta_array, 0x2c0, 0x20, true, 0x964fdd3cca01a2fa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThisPart1.unique_containerPassthroughData", unique_container_passthrough_data, 0x2e0, 0x20, true, 0xd2028da233489b40)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThisPart1.unique", unique, 0x0, 0x0, false, 0xc13530dac7cf2403)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif