#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ndis::kspin_t*, struct nt::ktimer_t*, int64_t, struct nt::kdpc_t*)>*), "_KSCLOCK_DISPATCH.SetTimer", set_timer, 0x0, 0x0, false, 0x345271ada4e30ff4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ndis::kspin_t*, struct nt::ktimer_t*)>*), "_KSCLOCK_DISPATCH.CancelTimer", cancel_timer, 0x0, 0x0, false, 0x2c133c32be50e34b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t(struct ndis::kspin_t*, int64_t*)>*), "_KSCLOCK_DISPATCH.CorrelatedTime", correlated_time, 0x0, 0x0, false, 0x9d3ca32b54b25cae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::kspin_t*, struct ndis::ksresolution_t*)>*), "_KSCLOCK_DISPATCH.Resolution", resolution, 0x0, 0x0, false, 0x8541e23ae21a1656)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif