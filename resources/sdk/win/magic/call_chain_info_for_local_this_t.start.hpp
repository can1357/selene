#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CallChainInfoForLocalThis.astaExemptFlags", asta_exempt_flags, 0x0, 0x20, true, 0xa5331c6bd05d1212)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CallChainInfoForLocalThis.astaOxidsToSendCount", asta_oxids_to_send_count, 0x20, 0x20, true, 0x3d168e77d23478a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CallChainInfoForLocalThis.tlsTouchedAstasInActiveCallCount", tls_touched_astas_in_active_call_count, 0x40, 0x20, true, 0xaeffa991fe28f342)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t*), "CallChainInfoForLocalThis.tlsTouchedAstasInActiveCall", tls_touched_astas_in_active_call, 0x80, 0x40, true, 0xa409bbb4f13a4579)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CallChainInfoForLocalThis.currentThreadNativeApartmentOxidIfNeeded", current_thread_native_apartment_oxid_if_needed, 0xc0, 0x40, true, 0xccd1d25e1f2f0752)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif