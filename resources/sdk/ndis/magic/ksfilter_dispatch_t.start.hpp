#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksfilter_t*, struct nt::irp_t*)>*), "_KSFILTER_DISPATCH.Create", create, 0x0, 0x0, false, 0x18d0b62ac50f46c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksfilter_t*, struct nt::irp_t*)>*), "_KSFILTER_DISPATCH.Close", close, 0x0, 0x0, false, 0x3b20901b1069387d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksfilter_t*, struct ndis::ksprocesspin_indexentry_t*)>*), "_KSFILTER_DISPATCH.Process", process, 0x0, 0x0, false, 0x65129eafba901c7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksfilter_t*)>*), "_KSFILTER_DISPATCH.Reset", reset, 0x0, 0x0, false, 0x9dc6c555406223cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif