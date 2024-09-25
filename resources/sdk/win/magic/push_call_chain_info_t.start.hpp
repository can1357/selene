#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PushCallChainInfo._cSavedTouchedAstasInActiveCall", c_saved_touched_astas_in_active_call, 0x0, 0x20, true, 0x7386a8793055a285)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t*, const uint64_t*>), "PushCallChainInfo._pSavedTouchedAstasInActiveCall", p_saved_touched_astas_in_active_call, 0x40, 0x40, true, 0x4fecd918a073dadd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PushCallChainInfo._dwSavedAstaToAstaExemptTlsFlags", dw_saved_asta_to_asta_exempt_tls_flags, 0x80, 0x20, true, 0x3d02e552e3d9abed)
#else
#define _m00
#define _m01
#define _m02
#endif